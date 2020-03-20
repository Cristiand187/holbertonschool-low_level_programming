#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


void  calledFirst(void) __attribute__((constructor));

/**
 * calledFirst - check the code for Holberton School students.
 */

void  calledFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
