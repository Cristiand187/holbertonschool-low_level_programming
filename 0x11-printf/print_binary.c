#include "holberton.h"

/**
* print_binary - function to convert decimal a binary
* @arg: va_list type
* Return: always successful
*/

int print_binary(va_list arg)
{
	int num, array[20], i = 0, j = 0;

	num = va_arg(arg, int);

	for (i = 0; num > 0; i++)
	{
		array[i] = num % 2;
		num = num / 2;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(array[j] + '0');
	}

	return (i);
}
