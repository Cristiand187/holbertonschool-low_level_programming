#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - This function create a arrays
 *
 * @d: string s2 content the arrays
 * Return: pointer struct
 */
void free_dog(dog_t *d)
{

	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
