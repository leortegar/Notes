# cfunctest.s - An example of using C functions */
.section .data
output:
   .asciz "This is an impresion test without a direct  System Call\n"
.section .text
.globl _start
_start:
   movl $10, %ecx
loop1:
   pushl %ecx
   pushl $output
   call printf
   addl $4, %esp
   pushl $5
   call sleep
   addl $4, %esp
   popl %ecx
   loop loop1
   pushl $0
   call exit
