#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * print_array - xxx
 *
 * @a: yy
 * @n: zz
 * Return: Description of the returned value
 */


void print_array(int *a, int n)
{

	int l = 0;

	for  (l = 0; l < n; l++)
	{
		if (l != (n - 1))
			printf("%d, ", a[l]);
		else
			printf("%d", a[l]);
	}
	putchar('\n');
}
