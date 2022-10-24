.data
	prompt:
		.asciiz	"\nEnter a number "

	array:
		.word	8
		# word mean 4 bytes (for int?)
		# and the int stored in this word is 8

.text
	main:

	WHILE:
		# to read an integer
		beq	$t0, 32, EXIT
		
		# print "Enter a number"
		li	$v0, 4
		la	$a0, prompt
		syscall

		# to read an integer and store it in $v0
		li	$v0, 5
		syscall
		
		# store the integer read into the array from $v0
		sw	$v0, array($t0)

		# print the integer read
		move	$t3, $v0
		li	$v0, 1
		move	$a0, $t3
		syscall

		# increment $t0
		addi	$t0, $t0, 4
		j WHILE
		
	EXIT:
		li	$v0, 10
		syscall
