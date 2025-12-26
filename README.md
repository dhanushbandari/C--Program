# C-program
Learning to code differently ..
<br>
What is C.?
<br>
C is a genral purpose.procedural programming language devloped by "DENNIS RITCHIE"
it's mainly used for system programming embedded system,and application requiring high performance..
<br>
How to run Programmed file using compiler
<br>
gcc "filename"
<br>
a.exe(WINDOWS) or .\a.exe 
<br>
<br>
GCC (GNU Complier Collection)is an open-source set of compliers from the free software foundation that supports languages like C,C++,ADA,FORTRAN,Objectives-C
<br>
<br>
It compiles source code into machine code, offers optimization and debugging options 
(e.g., -O2, -g), supports language-standard flags (e.g., -std=c11),and runs on many platforms (Unix-like systems and Windows via MinGW/Cygwin/WSL). 
Example: gcc hello.c -o hello.
<br>
<br>
WHAT IS LANGUAGE STANDARD FLAGS ?
<br>
<br>
Language standard flags tell the compiler which version of the language rules and standard library to follow (syntax, semantics, and which standard library features are available) and whether GNU/vendor extensions are allowed.
<br>
<br>
Examples
<br>
C: -std=c89, -std=c99, -std=c11, -std=c17, -std=c23 or GNU variants -std=gnu99, -std=gnu11,
<br>
C++: -std=c++11, -std=c++17, -std=c++20, -std=c++23 or -std=gnu++20,-std=gnu... 
<br>
enables GNU extensions; plain -std=c.../-std=c++.follows the official ISO standard only.
<br>
<br>
Quick example: gcc -std=c11 -Wall -Wextra -pedantic-errors hello.c -o hello
<br>
Use -pedantic or -pedantic-errors to enforce strict standard compliance (reject or warn about extensions)
<br>
<br>
What is -pedantic-errors? ✅
<br> 
pedantic : tells GCC to warn about any code that violates the ISO C/C++ standard (e.g.use of non‑standard or implementation‑defined features).
<br>
pedantic-errors : upgrades those pedantic warnings into errors, so the compilation fails on such violations (non‑zero exit).
<br>
<br>
Why use them ?
<br>
ensures portability, predictable behavior, and reproducible builds 
(GCC’s default can change between versions explicit is safer).
<br>
<br>
CHAPTER 1 : CONDITIONAL STATEMENT
<br>
<br>
What is Conditional statement..?
<br>
A conditional statement lets a program choose which code to run based on a boolean expression (a condition). 
<br>
It controls program flow — run Block A if a condition is true, otherwise run Block B (or do nothing).
<br>
<br>
TYPES <br>
if Statement
<br>
Syntax: if (condition) { /* statements */ }
<br>
<br>
if‑else
<br>
Syntax: if (condition) { ... } else { ... }
<br>
<br>
if‑else‑if (ladder)
Use for multiple alternatives:
<br>
if (x > 0) { ... }
<br>
else if (x == 0) { ... }
<br>
else { ... }
<br>
<br>
Ternary (conditional) operator
<br>
Short inline conditional: condition ? expr1 : expr2
<br>
Example: int sign = (x >= 0) ? 1 : -1;
<br>
<br>
Tips & notes 💡
<br>
Always use { } to avoid mistakes, even for single statements.
<br>
Keep conditions simple and readable; combine with && / || when needed.
<br>
Use the ternary operator only for short, simple expressions.
<br>
<br>
CHAPTER 2 : LOOPS in C program..!
<br>
<br>
What are loops in C? 🔁
<br>
Loops let a program repeat a block of code multiple times until a condition changes.
<br>
Loops used to process collections, repeat tasks, or run until a condition is met.
<br>
<br>
Main loop types
<br>
for loop 🔧 : Used when the number of iterations is known or simple to control.
<br>
EXAMPLE CODE:-
<br>
for (int i = 0; i < 5; i++) {
    <br>
    printf("%d\n", i);
    <br>
}
<br>


