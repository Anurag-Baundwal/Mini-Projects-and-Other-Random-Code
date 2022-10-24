.data 
	msg1: .asciiz "Message 1 printed successfully.\n"
	msg2: .asciiz "Message 2 printed successfully.\n"
	msg3: .asciiz "Message 3 printed successfully.\n"
	
.text
	
m1:
	li $v0, 4
	la $a0, msg1
	syscall
	jal m2
	
	return_address:
		#will the below lines get printed?
		li $v0, 4
		la $a0, msg3
		syscall
	
m2:
	li $v0, 4
	la $a0, msg2
	syscall
	
jr $ra
	