// quadra.vs
`include "quadra.vh"

module quadra
(
    input  logic        clk,     
    input  logic        rst_b,    
    input  x_t          x,        
    input  dv_t         x_dv,     
    output y_t          y,        
    output dv_t         y_dv      
);

    // Pipeline dla propagacji sygnału ważności (3 etapy)
    dv_t dv_p0, dv_p1, dv_p2;

    always_ff @(posedge clk or negedge rst_b)  // Asynchroniczny reset
    if (!rst_b) begin
        dv_p0 <= '0;
        dv_p1 <= '0;
        dv_p2 <= '0;
    end
    else begin
        dv_p0 <= x_dv;
        dv_p1 <= dv_p0;
        dv_p2 <= dv_p1;
    end

    //assign y_dv = dv_p2;

    x1_t x1;
    x2_t x2;

    assign x1 = x[X_W-1:X_W-X1_W];   // Pobranie bitów 23 do 17
    assign x2 = x[X2_W-1:0];         // Pobranie bitów 16 do 0
    
    sq_t sq;  // x2^2
    square square_inst (
        .x2(x2),
        .sq(sq)
    );
    
    a_t a;
    b_t b;
    c_t c;
    
    lut lut_inst (
        .x1(x1),
        .a(a),
        .b(b),
        .c(c)
    );
    
    logic signed [B_I + X2_I + B_F + X2_F - 1 : 0] t1_full; // s3.29
    
    t1_t t1;  // b * x2
    always_ff @(posedge clk or negedge rst_b)
    if (!rst_b)
        t1 <= '0;
    else if (dv_p1)
    begin
        t1_full <= b * x2; // Wynik w s3.29
        t1 <= t1_full >>> (B_F + X2_F - T1_F);
    end

    logic signed [C_I + SQ_I + C_F + SQ_F - 1 : 0] t2_full;

    t2_t t2;  // c * x2^2
    always_ff @(posedge clk or negedge rst_b)
    if (!rst_b)
        t2 <= '0;
    else if (dv_p2)
    begin
        t2_full <= c * sq;
        t2 <= t2_full >>> (C_F + SQ_F - T2_F);
    end
    
    s_t s; // a + b*x2 + c*x2^2
    always_ff @(posedge clk or negedge rst_b)
    if (!rst_b)
        s <= '0;
    else if (dv_p2)
        s <= a + (t1 >>> (T1_F - S_F)) + (t2 >>> (T2_F - S_F));
        //s <= a + t1 + t2;

    always_ff @(posedge clk or negedge rst_b)
    if (!rst_b)
        y <= '0;
    else if (dv_p2)
        y <= s;//[S_W-1 -: Y_W]; // - 4 bity ułamkowe

        dv_t y_dv_r;
    always_ff @(posedge clk or negedge rst_b)
    if (!rst_b)
        y_dv_r <= '0;
    else
        y_dv_r <= dv_p2; // Przesunięcie o jeden cykl

    assign y_dv = y_dv_r;

endmodule
