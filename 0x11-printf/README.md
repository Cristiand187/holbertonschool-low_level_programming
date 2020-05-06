# 0x11. C – printf


_This project is a summary of the C programming knowledge that Holberton School cohort 11 students have learned since the program began on January 27, 2020_


## Function prototype

int _printf(const char *format, ...);


## Format specifiers


- [x] %c print a single character
- [x] %d print a decimal (base 10) number
- [ ] %e print an exponential floating-point number
- [ ] %f print a floating-point number
- [ ] %g print a general-format floating-point number
- [x] %i print an integer in base 10
- [ ] %o print a number in octal (base 8)
- [x] %s print a string of characters
- [ ] %u print an unsigned decimal (base 10) number
- [ ] %x print a number in hexidecimal (base 16)
- [x] %% print a percent sign (\% also works)
- [ ] \a audible alert (bell)
- [ ] \b backspace
- [ ] \f form feed
- [ ] \n newline (linefeed)
- [ ] \r carriage return
- [ ] \t tab
- [ ] \v vertical tab


## EXAMPLES OF USE

**Characters**
```
_printf("Character with _print:[%c][%c][%c][%c]\n", 'H', 'o', 'l', 'b');
Output:
Holb
```
**Strings**
```
_printf("String:[%s]\n", "Hello, Holberton!");
Output:
Hello, Holberton
```
**Decimal and Integers**
```
_printf("Actual: %i\n", INT_MIN);
_printf("Actual: %i\n", INT_MAX);
Output:
-2147483648
+2147483647
```
**Project Requirements**

All files will be compiled on Ubuntu 14.04 LTS

Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic  

Code must follow the Betty style

Global variables are not allowed

**Authorized functions and macros:**

write (man 2 write)

malloc (man 3 malloc)

free (man 3 free)

va_start (man 3 va_start)

va_end (man 3 va_end)

va_copy (man 3 va_copy)

va_arg (man 3 va_arg)

**Mandatory Tasks**

Write function that produces output with conversion specifiers c, s, and %.

Handle conversion specifiers d, i.

Create a man page for your function.

**Advanced Tasks**

Handle conversion specifier b.

Handle conversion specifiers u, o, x, X.

Use a local buffer of 1024 chars in order to call write as little as possible.

Handle conversion specifier S.

Handle conversion specifier p.

Handle flag characters +, space, and # for non-custom conversion specifiers.

Handle length modifiers l and h for non-custom conversion specifiers.

Handle the field width for non-custom conversion specifiers.

Handle the precision for non-custom conversion specifiers.

Handle the 0 flag character for non-custom conversion specifiers.

Handle the custom conversion specifier r that prints the reversed string.

Handle the custom conversion specifier R that prints the rot13'ed string.

All above options should work well together.

## File Descriptions

**_printf.c:** - contains the fucntion _printf, which uses the prototype int _printf(const char *format, ...);. The format string is composed of zero or more directives. See man 3 printf for more detail. _printf will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to stdout, the standard output stream.  

**_putchar.c:** - contains the function _putchar, which writes a character to stdout. 

**_puts.c:** - contains the function _puts, which writes sequence of characters to the standard output 

**holberton.h:** - contains all function prototypes used for _printf.

**man_3_printf:** - manual page for the custom _printf function.

**_print_num.c:** - contain the function that print numbers.

**print_char.c:** - contains the function which handle the conversion specifiers c, which prints a char's ascii value  

**print_percent.c:** - contains the function that prints only one percent symbol 

**print_decimal.c:** - contains the function that prints decimal numbers

**print_int.c:** - contains the function that prints natural numbers, their opposites and zero

**print_unknown.c:** - contains the function that prints unknown

**print_string.c:** - contains the function that prints all the strings

**_strlen.c:** - contains the function that prints the number of characters

**_print_rev.c:** - contains the function that prints a string in reverse


**We compiled via:**

$ gcc -Wall -Werror -Wextra -pedantic *.c


## Authors ##

**MARISOL RAMIREZ – CRISTIAN PINEDA**