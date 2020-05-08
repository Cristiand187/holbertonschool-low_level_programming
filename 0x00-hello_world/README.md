# 0x00. C - Hello, World

## Resources:books:
Read or watch:
* [Everything you need to know to start with C](https://intranet.hbtn.io/rltoken/JgP0ALD8CNZM19FLZQetMQ)
* [Dennis Ritchie](https://intranet.hbtn.io/rltoken/vY9KI1Ai38BUuydEfadtaA)
* [“C” Programming Language: Brian Kernighan](https://intranet.hbtn.io/rltoken/f5nVwIVoNRrnddbX-5h5rw)
* [Why C Programming Is Awesome](https://intranet.hbtn.io/rltoken/J7yAaPGVuPoJI4iP1DuIPw)
* [Learning to program in C part 1](https://intranet.hbtn.io/rltoken/AicyjqLinWdA9qxKsXBKjg)
* [Learning to program in C part 2](https://intranet.hbtn.io/rltoken/1qtDStnOrOjrVseFa3jngA)
* [Understanding C program Compilation Process](https://intranet.hbtn.io/rltoken/qM-SOqtf8ZnGxVtVWchAfg)
* [Holberton’s Betty Coding Style](https://intranet.hbtn.io/rltoken/8c-wkUvvmuA_d5s4ktmnEw)
* [Hash-bang under the hood](https://intranet.hbtn.io/rltoken/7oODGrfLgAJJzoCbfBap3Q)
* [Linus Torvalds on C vs. C++](https://intranet.hbtn.io/rltoken/8rYFkn82I0QlSygvC0u2Jw)

---
## Learning Objectives:bulb:
What you should learn from this project:

* Why C programming is awesome (don’t forget to tweet today, with the hashtag #cisfun :))
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type gcc main.c
* What is an entry point
* What is main
* How to print text using printf, puts and putchar
* How to get the size of a specific type using the unary operator sizeof
* How to compile using gcc
* What is the default program name when compiling with gcc
* What is the official Holberton C coding style and how to check your code with betty-style
* How to find the right header to include in your source code when using a standard library function
* How does the main function influence the return value of the program

---

### [0. Preprocessor](./0-preprocessor)
Write a script that runs a C file through the preprocessor and save the result into another file.
 * The C file name will be saved in the variable $CFILE
 * The output should be saved in the file c


### [1. Compiler](./1-compiler)
Write a script that compiles a C file but does not link.
 * The C file name will be saved in the variable $CFILE
 * The output file should be named the same as the C file, but with the extension .o instead of .c.
	 * Example: if the C file is main.c, the output file should be main.o


### [2. Assembler](./2-assembler)
Write a script that generates the assembly code of a C code and save it in an output file.
 * The C file name will be saved in the variable $CFILE
 * The output file should be named the same as the C file, but with the extension .s instead of .c.
	 * Example: if the C file is main.c, the output file should be main.s


### [3. Name](./3-name)
Write a script that compiles a C file and creates an executable named cisfun.


### [4. Hello, puts](./4-puts.c)
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.


### [5. Hello, printf](./5-printf.c)
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.


### [6. Size is not grandeur, and territory does not make a nation](./6-size.c)
Write a C program that prints the size of various types on the computer it is compiled and run on.
 * You should produce the exact same output as in the example
 * Warnings are allowed
 * Your program should return 0
 * You might have to install the package  libc6
dev
i386 on your Linux (Vagrant) to test the 
m32 gcc option


### [7. What happens when you type gcc main.c](./100-intel)
Write a blog post that explains all the steps of compilation. Use command lines and examples to illustrate.
 * Use gcc as the compiler
 * Have at least one picture, at the top of the blog post
 * Publish your blog post on Medium or LinkedIn
 * Share your blog post at least on LinkedIn
 * Please, remember that these blogs must be written in English to further your technical ability in a variety of settings


### [8. Intel](./101-quote.c)
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
 * The C file name will be saved in the variable $CFILE.
 * The output file should be named the same as the C file, but with the extension .s instead of .c.
	 * Example: if the C file is main.c, the output file should be main.s


---

## Author
* **Cristian David Pineda Vargas** - [Cristiand187](https://github.com/Cristiand187)