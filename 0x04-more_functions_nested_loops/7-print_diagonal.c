#include "holberton.h"
#include <stdio.h>

/**
 * print_diagonal - xxx
 *
 * @n: xx
 *
 * Return: Description of the returned value
 */

void print_diagonal(int n)
{
	int a = 0, b = n, c = 92;

	for (a = 0; a < n; a++)
	{
		b = a;
		while (b != 0)
		{
			_putchar(' ');
			b--;
		}
		_putchar(c);
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
