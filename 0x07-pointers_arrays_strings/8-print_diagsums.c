#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - this function that fills memory with a constant byte.
 *
 * @a: Parameter bytes of the memory area pointed.
 * @size: xx
 *
 * Return: Returns a pointer to the memory area
 *
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, s1 = 0, s2 = 0;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
				s1 = s1 + *(a + i * size + j);

			if (i + j == size - 1)
				s2 = s2 + *(a + i * size + j);
			j++;
		}
		i++;
	}
	printf("%i, %i\n", s1, s2);
}
