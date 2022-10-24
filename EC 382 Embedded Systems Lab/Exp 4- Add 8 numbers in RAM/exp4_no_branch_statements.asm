start:

;R0 is a pointer and initally stores address 8
MOV R0, #08h ; Store value 8 in R0 (ie store address 8 in R0)
MOV A, @R0 ; move data pointed to by R0 to A
MOV R1, A   ; store from A to R1

; 1
INC R0
MOV A, @R0
ADD A, R1
MOV R1, A

; 2
INC R0
MOV A, @R0
ADD A, R1
MOV R1, A

; 3
INC R0
MOV A, @R0
ADD A, R1
MOV R1, A

; 4
INC R0
MOV A, @R0
ADD A, R1
MOV R1, A

; 5
INC R0
MOV A, @R0
ADD A, R1
MOV R1, A

; 6
INC R0
MOV A, @R0
ADD A, R1
MOV R1, A

; 7
INC R0
MOV A, @R0
ADD A, R1
MOV R1, A

L: SJMP L

; Final value in R1: 0x24 or 36 in base 10
; Expected value: 1+2+3+4+5+6+7+8 = 36 or 0x24