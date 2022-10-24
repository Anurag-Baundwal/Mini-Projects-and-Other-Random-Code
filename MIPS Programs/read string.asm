.data
msg1: .asciiz "Enter a string : "
msg2: .asciiz "The string you entered is : "
input_str: .space 50

.text
li $v0, 4 
la $a0, msg1
syscall #prints msg1

li $v0, 8
la $a0, input_str
li $a1, 50
syscall #take the input and put it in input_str

li $v0, 4
la $a0, msg2
syscall #prints msg2

li $v0, 4
la $a0, input_str
syscall #prints input_str