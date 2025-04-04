`include "quadra.vh"

module square
(
    input  x2_t x2,
    output sq_t sq
);

    always_comb sq = (x2 * x2) >> X2_F;

endmodule    
