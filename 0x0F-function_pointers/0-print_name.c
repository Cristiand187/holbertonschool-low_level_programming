#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - funtion pointer print
 *
 * @name: xx
 * @f: xx
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != '\0')
		(*f)(name);
}
