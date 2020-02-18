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
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
