#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_strings - function that printer the string
 *
 * @n: is number the string
 * @separator: is string separator the string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *s;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	while (i < n)
	{
		s = va_arg(ap, char *);
		if (i != n - 1)
		{
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", s, separator);
		}
		else
		{
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
