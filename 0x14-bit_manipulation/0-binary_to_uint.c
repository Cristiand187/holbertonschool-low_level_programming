#include <stdio.h>
#include <math.h>
#include "holberton.h"

/**
 * power - Function to calculate x raised to the power y
 * @x: number
 * @y: power
 * Return: calculate.
 */
int power(int x, unsigned int y)
{
	if (y == 0)
		return (1);
	else if (y % 2 == 0)
		return (power(x, y / 2) * power(x, y / 2));
	else
		return (x * power(x, y / 2) * power(x, y / 2));
}

/**
 * binary_to_uint - This function that converts a binary number to
 * an unsigned int.
 * @b: binary number
 * Return: decimal number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0, decimal = 0, i = 0;

	while (b[count] != '\0')
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
		count++;
	}

	for (i = 1; i <= count; i++)
	{
		decimal += (b[count - i] - '0') * power(2, (i - 1));
	}

	return (decimal);
}
