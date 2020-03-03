#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - This function create a arrays
 *
 * @width: string for content the arrays
 * @height: string s2 content the arrays
 * Return: arrays or null
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;

	int **array;

	array = malloc(width * sizeof(int *));


	if (width <= 0 || height <= 0)
		return (NULL);


	for (i = 0; i < width; i++)
	{
		array[i] = malloc(height * sizeof(int));

		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}


	return (array);
}
