#include "dog.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * init_dog - This function create a arrays
 *
 * @d: string for content the arrays
 * @name: string s2 content the arrays
 * @age: pointer or null
 * @owner: xx
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
