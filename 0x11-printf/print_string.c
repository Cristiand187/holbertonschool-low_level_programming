#include "holberton.h"

/**
* print_string - function to print string
* @arg: va_list type
* Return: always successful
*/

int print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);

	if (str == NULL)
		return (0);

	_puts(str);

	return (_strlen(str));
}
