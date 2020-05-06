
#include "holberton.h"

/**
* print_unknown - function to print unknown
* @arg: va_list type
* Return: always successful
*/

int print_unknown(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);

	if (str == NULL)
		return (-1);

	return (print_rev(str));
}
