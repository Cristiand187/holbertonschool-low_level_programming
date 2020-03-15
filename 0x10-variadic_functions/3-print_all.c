#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_int - funcion
 *
 * @arg: xx
 */

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}


/**
 * print_char - funcion
 *
 * @arg: xx
 */

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}


/**
 * print_float - funcion
 *
 * @arg: xx
 */

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}


/**
 * print_string - funcion
 *
 * @arg: xx
 */

void print_string(va_list arg)
{
	char *pr;

	pr = va_arg(arg, char *);

	if (pr == NULL)
	{
		pr = "(nil)";
	}

	printf("%s", pr);
}


/**
 * print_all - funcion
 *
 * @format: xx
 */

void print_all(const char * const format, ...)
{

	int i = 0, j = 0;
	va_list arg;
	char *separator;

	pt types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(arg, format);

	separator = "";

	while (format && format[i])
	{
		j = 0;
		while (types[j].test)
		{
			if (format[i] == types[j].test[0])
			{
				printf("%s", separator);
				types[j].printer(arg);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(arg);
}
