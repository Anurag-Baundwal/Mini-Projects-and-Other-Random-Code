    q                                                               ````````````````MOV R0, #20h    ; Location 20h contains n, the number of fibonacci nos. to be read
MOV A, @R0      ; Get n from 20h and store it in accumulator
SUBB A, #2h     ; first two terms are already known, so we will only run the loop n-2 times
MOV R2, A       ; R2 is the loop counter

MOV R3, #0h
MOV R4, #1h     ; first two terms are 0 and 1

; This loop logic is not correct..............................
Loop:           ; Loop begins............................
MOV A, #0h
ADD A, R3
ADD A, R4
;MOV R5, A       ; Storing the current sum in R5

MOV A, R4       ; now swapping the values in R3 and R4
MOV R3, A
MOV A, R5
MOV R4, A       ; swap complete

DJNZ R2, LOOP   ; Loop ends..............................

MOV A, R5
MOV 21h, A

L:
SJMP L