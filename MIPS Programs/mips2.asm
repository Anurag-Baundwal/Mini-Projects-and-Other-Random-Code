#This segmentation of memory into stack and coce was first implemented in INtel 8086
#############################################################
.data #stack

#in assembly "symbol" means an address
input_str .word 8 #allocated as a pointer
ask_input: .asciiz "\nPlease enter any string\n"
tell_output: .asciiz "You entered\n"

#############################################################
.text #code

main

la $a0, ask_input #a0 stand for alinged memory -- So the address has to be multiples 8
li $vo, 4
syscall

la $a0, input_str
li $a1, 8
li $v0, 8
syscall

la $a0, tell_output
li $v0, 4
syscall

la $ao, input_str
li $v0, 4
syscall

la $a, ask_int
li $vo, 4
syscall

li $v0. 5
syscall
