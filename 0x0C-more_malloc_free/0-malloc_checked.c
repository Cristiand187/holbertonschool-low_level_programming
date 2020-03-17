#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - This function print name programs
 * @b: The number of arguments
 * Return: value 0
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);

}
