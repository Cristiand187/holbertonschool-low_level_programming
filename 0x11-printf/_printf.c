#include "holberton.h"

/**
* _printf - function to print all inputs
* @format: const pointer to functionof type char
* Return: always successful
*/

int _printf(const char *format, ...)
{
	int i = 0, j = 0, count = 0;
	va_list arg;
	pt_t types[] = {
		{"i", print_int}, {"c", print_char}, {"s", print_string},
		{"d", print_decimal}, {"%", print_percent}, {"r", print_unknown},
		{"b", print_binary}, {"u", print_unsigned}, {NULL, NULL}
	};

	va_start(arg, format);
	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		while ((format[i] != '%') && (format[i + 1] != '\0'))
		{
			_putchar(format[i]);
			i++;
			count++;
		}
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (types[j].test)
			{
				if (types[j].test[0] == format[i])
					count = count + types[j].printer(arg);
				j++;
			}
		}
		if (format[i] == '\n')
		{
			_putchar('\n');
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
