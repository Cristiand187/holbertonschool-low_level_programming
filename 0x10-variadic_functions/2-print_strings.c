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

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (n != 0)
	{

		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char *);
			if (strcmp(separator, "") == 0)
				printf("%s ", str);
			else
			printf("%s%s ", str, ((i != n - 1) ? separator : ""));
		}
		va_end(ap);
		printf("\n");

	}
}
