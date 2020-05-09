# 0x10. C - Variadic functions

## :books: Resources
Read or watch:
* [stdarg.h](https://intranet.hbtn.io/rltoken/KNHC7kjcnZZCKDCHdXis4w)
* [C - Variable Arguments](https://intranet.hbtn.io/rltoken/zwbmuG8xpQ-ezg9_U8a6mg)
* [Functions with Variable Argument Lists in C using va_list](https://intranet.hbtn.io/rltoken/8XLFeeXtYxqNYDpStBJbDw)
* [Variadic Functions](https://intranet.hbtn.io/rltoken/VOS7s9X1ysxlU2X3xtCmFw)
* [Const Keyword](https://intranet.hbtn.io/rltoken/vxuoclIH_Hap9c7sciDnFQ)

---
## :bulb: Learning Objectives
What you should learn from this project:

* What are variadic functions
* How to use va_start, va_arg and va_end macros
* Why and how to use the const type qualifier

---
## Task

### [0. Beauty is variable, ugliness is constant](./0-sum_them_all.c)
Write a function that returns the sum of all its parameters.
 * Prototype: int sum_them_all(const unsigned int n, ...);
 * If n == 0, return 0


### [1. To be is to be the value of a variable](./1-print_numbers.c)
Write a function that prints numbers, followed by a new line.
 * Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
 * where separator is the string to be printed between numbers
 * and n is the number of integers passed to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * Print a new line at the end of your function


### [2. One woman's constant is another woman's variable](./2-print_strings.c)
Write a function that prints strings, followed by a new line.
 * Prototype: void print_strings(const char *separator, const unsigned int n, ...);
 * where separator is the string to be printed between the strings
 * and n is the number of strings passed to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function


### [3. To be is a to be the value of a variable](./3-print_all.c)
Write a function that prints anything.
 * Prototype: void print_all(const char * const format, ...);
 * where format is a list of types of arguments passed to the function
	 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 * see example
 * You are not allowed to use for, goto, ternary operator, else, do ... while
 * You can use a maximum of
	 * 2 while loops
 * 2 if
 * You can declare a maximum of 9 variables
 * You are allowed to use printf
 * Print a new line at the end of your function


### [4. Real programmers can write assembly code in any language](./100-hello_holberton.asm)
Write a 64
bit program in assembly that prints Hello, Holberton, followed by a new line.
 * You are only allowed to use the system call write (use int or syscall, not a call)
 * Your program will be compiled using nasm and gcc (as follows)

---

## Author
* **Cristian David Pineda Vargas** - [Cristiand187](https://github.com/Cristiand187)