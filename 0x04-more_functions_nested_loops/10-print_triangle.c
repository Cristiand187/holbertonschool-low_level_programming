#include "holberton.h"
#include <stdio.h>

/**
 * print_triangle - xxx
 *
 * @size: xx
 *
 * Return: Description of the returned value
 */

void print_triangle(int size)
{
	int a = 0, b = size, c = 35;

	if (size >= 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b >= (size - a - 1))
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
