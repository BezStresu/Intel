##
## Convert signed coeffs to hex:
##

load coeffs.txt

k = coeffs(:,1);
a = coeffs(:,2);
b = coeffs(:,3);
c = coeffs(:,4);

K = length(k);

# coeff a:
A_I =  3;
A_F = 18;
A_W = A_I + A_F; # (s3.18)

# coeff b:
B_I =  3;
B_F = 12;
B_W = B_I + B_F; # (s3.12)

# coeff c:
C_I =  3;
C_F = 7;
C_W = C_I + C_F; # (s3.7)

a_q = round(a * (2^A_F));
b_q = round(b * (2^B_F));
c_q = round(b * (2^C_F));

A = zeros(K,1);
B = zeros(K,1);
C = zeros(K,1);

# Print out the coefficients:
for k = 0 : K-1
    i = k+1; # array indexing starts at 1
    if (a_q(i) < 0)
        A(i) = a_q(i) + (2^A_W);
    else
        A(i) = a_q(i);
    end
    if (b_q(i) < 0)
        B(i) = b_q(i) + (2^B_W);
    else
        B(i) = b_q(i);
    end
    if (c_q(i) < 0)
        C(i) = c_q(i) + (2^C_W);
    else
        C(i) = c_q(i);
    end

    bin_str = dec2bin(k, 7);
    printf("7'b%s :  c = 'h%08x;\n", bin_str, C(i));
    #printf("%3d    'h%08x;\n", k, B(i));
endfor
