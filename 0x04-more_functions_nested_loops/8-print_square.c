#include "holberton.h"
#include <stdio.h>

/**
 * print_square - xxx
 *
 * @n: xx
 *
 * Return: Description of the returned value
 */

void print_square(int n)
{
	int a = 0, b = 0, c = 35;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				_putchar(c);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
