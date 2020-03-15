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
	unsigned int i = 0;
	va_list ap;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	while (i < n)
	{
		if (i != n - 1)
			printf("%d%s", va_arg(ap, int), separator);
		else
			printf("%d", va_arg(ap, int));
		i++;
	}
	va_end(ap);
	printf("\n");
}
