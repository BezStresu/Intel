// quadra_top.vs
`include "quadra.vh"

module quadra_top
(
    input  ck_t clk,           
    input  rs_t rst_b,         
    input  x_t  x,             
    input  dv_t x_dv,          
    output y_t  y,             
    output dv_t y_dv   
);

    // Pipeline data valid (3 stages):
    dv_t dv_p0, dv_p1, dv_p2;

    always_ff @(posedge clk or negedge rst_b)
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

    quadra quadra_inst (
        .clk(clk),
        .rst_b(rst_b),
        .x(x),
        .x_dv(dv_p2),
        .y(y),
        .y_dv(y_dv)
    );

endmodule
