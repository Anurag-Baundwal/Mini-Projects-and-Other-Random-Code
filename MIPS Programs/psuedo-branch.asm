.data
	message: .asciiz "Hi, how are you?"

.text
	main:
		addi $s0, $zero, 14
		addi $s1, $zero, 10
		
		bgt $s0, 7, printHi 
		bgtz $s0, printHi #Works because 14 > 0
		
	#End of main	
	li $v0, 10
	syscall
	
	printHi:
		li $v0, 4
		la $a0, message
		syscall