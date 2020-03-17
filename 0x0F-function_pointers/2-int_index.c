#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - funtion pointer printer int decimal and hexadecimal
 *
 * @array: number to printer
 * @size: size the array
 * @cmp: array to punters the functions
 *
 * Return: index to the arrays of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{

			if ((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);

}
