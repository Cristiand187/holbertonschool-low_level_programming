#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point n
 *
 * @n: xx
 * Return: Always n.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}

	if (n == 98)
	{
		printf("%d\n", n);
	}
}
