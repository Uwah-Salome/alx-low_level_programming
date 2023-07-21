# C - Debugging
Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as gdb or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.

## Requirements
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

### Some Methods of Debugging Manually

Manually debugging code involves identifying and resolving issues in the code by carefully inspecting it, making observations, and using different techniques to trace and understand the program's behavior. Here are some common methods of manual debugging:

Print Statements: Insert print statements (or log statements) at various points in the code to display the values of variables, function calls, or control flow. This allows you to see the values and flow of execution at different stages of the program.

Step-Through Execution: If your development environment supports it, use a debugger to step through the code line by line. You can set breakpoints, inspect variables, and observe the program's behavior in real-time.

Divide and Conquer: If the code is large and complex, narrow down the problem area by commenting out or isolating sections of code. This helps in identifying the specific part causing the issue.

Rubber Duck Debugging: Explain your code and the problem to an inanimate object or a colleague (the "rubber duck"). Often, the process of explaining the code to someone else or a thing can help you identify the problem on your own.

Code Review: Have another developer review your code. Fresh eyes can catch issues that you might have overlooked.

Binary Search: When dealing with large datasets or arrays, use a binary search approach to find the exact location of the bug. Divide the dataset in half and check one half, then divide the problematic half further until you narrow down the problem.

Assertions: Use assert statements to verify that certain conditions hold true at specific points in the code. This can help in catching unexpected states early.

Stack Trace: If your programming language supports it, inspect the stack trace when an error or exception occurs. It provides information about the sequence of function calls leading to the error.

Code Inspection: Read the code carefully, line by line, to check for syntax errors, logical errors, and off-by-one errors.

Rubber Duck Debugging: Explain your code and the problem to an inanimate object or a colleague (the "rubber duck"). Often, the process of explaining the code to someone else or a thing can help you identify the problem on your own.

Remember that debugging is an iterative process, and it requires patience and persistence. Often, a combination of the above methods can help you identify and fix the issue in your code.

#### For more Reads
* https://intranet.alxswe.com/rltoken/faGcpiJiejHH6GhqpmbhUw
* https://intranet.alxswe.com/rltoken/RaecqJBNkmZ92vLMpNDuGg
