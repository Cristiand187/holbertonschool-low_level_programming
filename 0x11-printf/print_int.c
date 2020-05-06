#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* print_int - function to print char
* @arg: va_list type
* Return: always successful
*/

int print_int(va_list arg)
{
	int num, count = 1;

	num = va_arg(arg, int);

	if (num <= INT_MAX && num >= INT_MIN)
		{
		_print_num(num);
	}
	else
	{
		return (-1);
	}

	if (num < 0)
		{
		count++;
	}

	while (num / 10)
	{
		num = num / 10;
		count++;
	}

	return (count);
}
