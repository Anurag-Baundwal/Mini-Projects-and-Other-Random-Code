start:
	MOV ACC, #0
	lp1: 
		INC ACC
		INC ACC
		MOV P1, ACC
	JMP lp1
end