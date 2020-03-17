#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - funtion pointer printer int decimal and hexadecimal
 *
 * @array: number to printer
 * @size: size the array
 * @action: array to punters the functions
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{

			(*action)(array[i]);
		}
	}
}
