#include "holberton.h"

/**
 * recarse_arrays - This function is concate two string
 *
 * @a: Arrays destination the two string/arrays
 * @n: This second string/array
 *
 * returns
 */

void reverse_array(int *a, int n)
{
	int i = 0, aux = 0;

	for (i = 0; i < n; i++)
	{
		n--;
		aux = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = aux;
	}
}
