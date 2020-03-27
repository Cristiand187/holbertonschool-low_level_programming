#include <stdio.h>
#include <math.h>
#include "holberton.h"


/**
 * clear_bit - This function that converts a binary number to
 * @n: decimal number.
 * @index: index binary.
 * Return: 1 or -1 value.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(int) * 8)
		return (-1);

	if (*n != 0)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
