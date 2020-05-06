#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* print_unsigned - function to print unsigned int
* @arg: va_list type
* Return: always successful
*/

int print_unsigned(va_list arg)
{
	unsigned int num, count = 1, umin = 0;

	num = va_arg(arg, int);

	if (num <= UINT_MAX && num >= umin)
		_print_num(-num);
	else
		return (-1);

	while (num / 10)
	{
		num = num / 10;
		count++;
	}

	return (count);
}
