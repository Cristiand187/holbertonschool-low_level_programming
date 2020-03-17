#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - This function create a arrays
 *
 * @grid: string for content the arrays
 * @height: string s2 content the arrays
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);

	}
	free(grid);

}
