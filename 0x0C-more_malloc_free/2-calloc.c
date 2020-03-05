#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - This function create a arrays
 *
 * @nmemb: string for content the arrays
 * @size: string s2 content the arrays
 * Return: pointer or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);


	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		array[i] = '\0';

	return (array);
}
