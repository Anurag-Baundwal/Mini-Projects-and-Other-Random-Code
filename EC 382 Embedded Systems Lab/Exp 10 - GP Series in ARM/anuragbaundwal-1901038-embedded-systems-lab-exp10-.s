@ Arm assembly code to generate a GP sequence with first term 2 and common ratio 3, and store it in registers R3 to R8 (ie, total 6 terms)

MOV R1, #2	@ First term is stored in reg R1
MOV R2, #3	@ Common ratio is stored in reg R2

@ Generating six terms using first term and c.d.
@ The first term is stored in register R3, second in R4, ... , sixth in R8

MOV R3, R1
MUL R4, R3, R2
MUL R5, R4, R2
MUL R6, R5, R2
MUL R7, R6, R2
MUL R8, R7, R2
