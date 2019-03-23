# C_codes

This file contain some of useful c codes as well as experiments.

## Description of codes.

### makefile
Makefile for all codes. Use options for specific file compilation.

#### make exp 
it will complile large_exponent.c and make executable file "exp"



### large_exponent.c 
Calculates exponential value.
After executing, it will ask for base and exponent value.
The output uses long double which means that the result's range
can be from 3.4E-4932 to 1.1E+4932 as storage size is 10 bytes.
Result won't show decimal places. Change source code as needed.