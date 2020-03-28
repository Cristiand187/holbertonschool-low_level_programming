#include <stdio.h>
#include <math.h>
#include "holberton.h"


/**
 * flip_bits - This function that converts a binary number to
 * @n: decimal number.
 * @m: index binary.
 * Return: 1 or -1 value.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int count;

	i = n ^ m;
	count = 0;

	while (i)
	{
		count++;
		i &= (i - 1);
	}

	return (count);
}
