#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * print_rev - xxx
 *
 * @s: yy
 * Return: Description of the returned value
 */


void print_rev(char *s)
{

	int len = strlen(s), l = 0;

	for  (l = len; l >=  0; l--)
	{
		_putchar(s[l]);
	}

	_putchar('\n');
}
