.data 	# Data declarations here
	msg1: .asciiz "Hello world!" #null terminated and present in main memory (RAM)
	
.text	# Assembly language ####instructions#### here
	la $a0, msg1 	# The a series of registers store arguments
					# Arguments to what? Maybe to syscall.
					# fun fact, registers are present in the cpu, so 
					# msg1 kind of went from main memory to cpu here :D
	main:
		li $v0, 4		# 4 is the system call code for printing a string
		syscall			# Telling the system to actually do the syscall
		
