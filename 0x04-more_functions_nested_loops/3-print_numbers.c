#include "holberton.h"
#include <stdio.h>

/**
 * print_numbers - xxx
 *
 * Return: Description of the returned value
 */

void print_numbers(void)
{
	int a = 0;

	for (a = 0; a <= 9; a++)
		_putchar(a + '0');

	_putchar('\n');
}
