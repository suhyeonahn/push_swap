# Sorting data on a stack, with a limited set of instructions, and the smallest number of moves.

This project is complied with the following rules: </br>
• You have to turn in a Makefile which will compile your source files. It must not
relink. </br>
• Global variables are forbidden. </br>
• You have to write a program named push_swap that takes as an argument the stack
a formatted as a list of integers. The first argument should be at the top of the
stack (be careful about the order). </br>
• The program must display the smallest list of instructions possible to sort the stack
a, the smallest number being at the top. </br>
• Instructions must be separated by a ’\n’ and nothing else. </br>
• The goal is to sort the stack with the lowest possible number of operations. During
the evaluation process, the number of instructions found by your program will be
compared against a limit: the maximum number of operations tolerated. If your
program either displays a longer list or if the numbers aren’t sorted properly, your
grade will be 0. </br>
• If no parameters are specified, the program must not display anything and give the
prompt back. </br>
• In case of error, it must display "Error" followed by a ’\n’ on the standard error.
Errors include for example: some arguments aren’t integers, some arguments are
bigger than an integer and/or there are duplicates.
