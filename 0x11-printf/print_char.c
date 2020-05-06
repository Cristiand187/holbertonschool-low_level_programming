#include "holberton.h"

/**
 * print_char - function to print char
 * @arg: va_list type
 * Return: always successful
 */

int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));

	return (1);
}
