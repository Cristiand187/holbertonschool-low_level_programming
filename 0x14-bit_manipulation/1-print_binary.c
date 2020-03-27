#include <stdio.h>
#include <math.h>
#include "holberton.h"


/**
 * print_binary - This function that converts a binary number to
 * @n: decimal number
 * Return: decimal number.
 */

void print_binary(unsigned long int n)
{
	unsigned int mask = 8388608, ban = 0;


	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (ban == 1)
				_putchar('0');
		}
		else
		{
			ban = 1;
			_putchar('1');
		}
		mask = mask >> 1;
	}
}
