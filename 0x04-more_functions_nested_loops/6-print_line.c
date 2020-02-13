#include "holberton.h"
#include <stdio.h>

/**
 * print_line - xxx
 *
 * @n: xx
 *
 * Return: Description of the returned value
 */

void print_line(int n)
{
	int a = 0;

	for (a = 0; a <= n; a++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
