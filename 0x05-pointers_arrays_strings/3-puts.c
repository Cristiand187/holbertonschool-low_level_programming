#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * _puts - xxx
 *
 * @str: yy
 * Return: Description of the returned value
 */


void _puts(char *str)
{
	int len = strlen(str), l = 0;

	for  (l = 0; l < len; l++)
	{
		_putchar(str[l]);
	}

	_putchar('\n');
}
