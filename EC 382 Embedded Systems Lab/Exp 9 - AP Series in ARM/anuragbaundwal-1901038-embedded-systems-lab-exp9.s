@ Arm assembly code to generate an AP with first term 18 and common difference 10

MOV R1, #18	@ First term 18 is stored in reg R1
MOV R2, #10	@ Common difference 10 is stored in reg R2

@ Generating six terms using first term and c.d.
@ The first term is stored in register R3, second in R4, ... , sixth in R8

MOV R3, R1
ADD R4, R3, R2
ADD R5, R4, R2
ADD R6, R5, R2
ADD R7, R6, R2
ADD R8, R7, R2
