#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - This function create a arrays
 *
 * @name: string s2 content the arrays
 * @age: pointer or null
 * @owner: xx
 * Return: pointer struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

	return (d);
}
