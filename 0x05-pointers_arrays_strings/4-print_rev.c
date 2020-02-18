#include "holberton.h"

/**
 * print_rev - xxx
 *
 * @s: yy
 * Return: Description of the returned value
 */


void print_rev(char *s)
{

	int len = 0, l = 0;

	while (s[len] != '\0')
		len++;

	for  (l = len - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}

	_putchar('\n');
}
