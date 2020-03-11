#include <stdio.h>
#include "function_pointers.h"


/**
 * _strlen - xxx
 *
 * @s: yy
 * Return: Description of the returned value
 */


int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * print_name - funtion pointer print
 *
 * @name: xx
 * @f: xx
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
}
