#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - This function create a arrays
 *
 * @d: string for content the arrays
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", ((*d).name != NULL ? (*d).name : "(nil)"));
		printf("Age: %f\n", ((*d).age != '\0' ? (*d).age : 0));
		printf("Owner: %s\n", ((*d).owner != NULL ? (*d).owner : "(nil)"));

	}
}
