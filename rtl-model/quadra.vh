// quadra.vh

`ifndef QUADRA_VH
`define QUADRA_VH

typedef logic ck_t; // clock
typedef logic rs_t; // reset
typedef logic dv_t; // data valid

// --------------------------------------------------------------------------------
// I/O precision
// --------------------------------------------------------------------------------

// x in [0,2) -> u1.23
localparam int  X_I =  1;          //         =  1
localparam int  X_F = 23;          //         = 23
localparam int  X_W = X_I + X_F;   //  1 + 23 = 24 (u1.23)

typedef logic [X_W-1:0] x_t;

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// x1 in [23,17) -> u1.6
localparam int  X1_I =  1;         //         = 1
localparam int  X1_F = 6;          //         = 6
localparam int  X1_W = X1_I + X1_F;  //  1 + 6  = 7 (u1.6)

typedef logic [X1_W-1:0] x1_t;	  // u1.6

// x2 in [16,0) -> u0.17
localparam int  X2_I =  0;         
localparam int  X2_J =  X2_I - X1_F;    // -6
localparam int  X2_F = X_W - X1_W;      // 17    
localparam int  X2_W = X2_I + X2_F;  //  0 + 17  = 7 (u0.17)

typedef logic [X2_W-1:0] x2_t;	  // u0.17

// y [-2,2) -> s2.23
localparam int  Y_I =  2;          //         =  2
localparam int  Y_F = 23;          //         = 23
localparam int  Y_W = X_I + X_F;   //  2 + 23 = 25 (s2.23)

typedef logic signed [Y_W-1:0] y_t;
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// --------------------------------------------------------------------------------
// Internal precision:
// --------------------------------------------------------------------------------

// <challenge!>


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// a:
localparam int A_I =  3;  // <optimize> 3
localparam int A_F = 18;  // <optimize> 18
localparam int A_W = A_I + A_F;

typedef logic signed [A_W-1:0] a_t;

// b:
localparam int B_I =  3;  // <optimize> 3 
localparam int B_F = 12;  // <optimize> 12
localparam int B_W = B_I + B_F;

typedef logic signed [B_W-1:0] b_t;

// c:
localparam int C_I =  3;  // <optimize> 3 
localparam int C_F = 7;  // <optimize> 7
localparam int C_W = C_I + C_F;

typedef logic signed [C_W-1:0] c_t;

// Dodatkowe bity ułamkowe do zaokrąglenia na końcu
localparam int R_F = 4;

// Szerokość wewnętrzna dla wyniku sumy s = t0 + t1 + t2
localparam int S_I = Y_I;
localparam int S_F = Y_F + R_F;  // (4 dodatkowe bity ułamkowe do zaokrąglenia)
localparam int S_W = S_I + S_F;

typedef logic signed [S_W-1:0] s_t; // s = t0 + t1 + t2

// Obliczanie kwadratu x2^2:
localparam int SQ_I = X_I + X_I;

`ifdef FULL_PRECISION
    localparam int SQ_F = X_F + X_F;
`else
    localparam int SQ_F = 24;
`endif

localparam int SQ_W = SQ_I + SQ_F;

typedef logic [SQ_W-1:0] sq_t; // sq = x2 * x2

// Obliczenia dla a:
localparam int T0_I = A_I;

`ifdef FULL_PRECISION
    localparam int T0_F = A_F;
`else
    localparam int T0_F = S_F;
`endif

localparam int T0_W = T0_I + T0_F;

typedef logic signed [T0_W-1:0] t0_t; // t0 = a

// Obliczenia dla b * x2:
localparam int T1_I = B_I + X_I;

`ifdef FULL_PRECISION
    localparam int T1_F = B_F + X_F;
`else
    localparam int T1_F = S_F;
`endif

localparam int T1_W = T1_I + T1_F;

typedef logic signed [T1_W-1:0] t1_t; // t1 = b * x2

// Obliczenia dla c * x2^2:
localparam int T2_I = C_I + SQ_I;

`ifdef FULL_PRECISION
    localparam int T2_F = C_F + SQ_F;
`else
    localparam int T2_F = S_F;
`endif

localparam int T2_W = T2_I + T2_F;

typedef logic signed [T2_W-1:0] t2_t; // t2 = c * x2^2

`endif
