#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

/**
 * struct pter - Struct op
 *
 * @test: The operator
 * @printer: The function associated
 */
typedef struct pter
{
	char *test;
	void (*printer)();
} pt;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void print_int(va_list arg);

void print_char(va_list arg);

void print_float(va_list arg);

void print_string(va_list arg);

#endif
