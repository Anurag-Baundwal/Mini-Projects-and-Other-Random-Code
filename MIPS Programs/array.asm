.data
array: .space 40
prompt: .asciiz "Enter a number : "

.text
la $t0, array

li $v0, 5 #the syscall code to read an integer is 5
syscall

lw array, $v0

