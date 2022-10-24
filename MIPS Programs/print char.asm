.data
	#myChar: .asciiz "m" ... works
	#myChar: .byte "m" ... Does not assemble properly
	myChar: .byte 'm'
		
.text
	li $v0, 4
	la $a0, myChar
	syscall