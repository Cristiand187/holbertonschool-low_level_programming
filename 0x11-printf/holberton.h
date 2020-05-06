#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct pt - Struct pt
 *
 * @test: The operator
 * @printer: The function associated
 */
typedef struct pt
{
	char *test;
	int (*printer)();
} pt_t;

void _puts(char *str);

int _putchar(char Text);

int _printf(const char *format, ...);

int print_int(va_list arg);

int print_char(va_list arg);

int print_string(va_list arg);

int print_decimal(va_list arg);

void _print_num(int num);

int print_percent(va_list arg);

int _strlen(char *s);

int print_unknown(va_list arg);

int print_rev(char *s);

int print_binary(va_list arg);

int print_unsigned(va_list arg);

#endif
