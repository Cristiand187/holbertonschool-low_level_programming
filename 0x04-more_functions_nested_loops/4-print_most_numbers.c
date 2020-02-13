#include "holberton.h"

/**
 * print_most_numbers - xxx
 *
 * Return: Description of the returned value
 */

void print_most_numbers(void)
{
	int a = 0;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');
	}
	_putchar('\n');
}
