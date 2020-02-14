#include "holberton.h"
#include <stdio.h>

/**
 * print_triangle - xxx
 *
 * @n: xx
 *
 * Return: Description of the returned value
 */

void print_triangle(int n)
{
	int a = 0, b = n, c = 35;

	if (n <= 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (b >= (n - a - 1))
					_putchar(c);
				else
					_putchar(' ');
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
