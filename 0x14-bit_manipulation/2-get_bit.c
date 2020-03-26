#include <stdio.h>
#include <math.h>
#include "holberton.h"


/**
 * get_bit - This function that converts a binary number to
 * @n: decimal number.
 * @index: index binary.
 * Return: index binary number.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int comp = 0;

	while (n >= comp)
	{
		if (index == i)
			return (n & 1);

		n >>= 1;

		i++;
	}

	return (-1);
}
