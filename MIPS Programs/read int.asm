.data
 	msg1: .asciiz "Enter a number : "
 	msg2: .asciiz "The number you entered is : " 
 	myint: .word 0

.text
	main:
	#step 1 - print msg1 (sycall code 4)
	#step 2 - read the integer (syscall code 5)
	#step 3 - print msg2 (sycall code 4)
	#step 4 - print the scanned integer (sycall code 1)
	
	############### ALWAYS USE $v0 for syscalls ###############
		li $v0, 4
		la $a0, msg1 
		syscall #step 1 complete

		li $v0, 5		
		syscall
		sw $v0, myint #step 2 complete
		
		li $v0, 4
		la $a0, msg2
		syscall #step 3 complete
		
		li $v0, 1
		lw $a0, myint
		syscall #step 4 complete
		
		#The end!
		
