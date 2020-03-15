#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that printer the num of all its parameters
 *
 * @n: is variable, ugliness is constant
 * @separator: is string separator the numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, num = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (separator == '\0')
			printf("%d ", num);
		else
			printf("%d%s ", num, ((i != n - 1) ? separator : ""));
	}
	va_end(ap);
	printf("\n");

}
