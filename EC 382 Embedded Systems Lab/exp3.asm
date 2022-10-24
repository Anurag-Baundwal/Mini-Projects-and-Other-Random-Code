start:
	MOV R0, P2
	MOV ACC, R0
	CPL A
	MOV R0, ACC
lpl:
	MOV ACC, R0
	CPL A
	MOV P1, ACC
	DJNZ R0, lpl
	JMP start
