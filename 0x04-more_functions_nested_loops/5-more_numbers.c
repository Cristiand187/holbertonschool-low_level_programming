#include "holberton.h"
#include <stdio.h>

/**
 * more_numbers - xxx
 *
 * Return: Description of the returned value
 */

void more_numbers(void)
{
	int a = 0, b = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar(b / 10 + '0');

			_putchar(b % 10 + '0');
		}

		_putchar('\n');
	}
}
