#include "holberton.h"

/**
 * print_rev - This function prints a string reverse
 *
 * @s: string to printer
 * Return: Description of the returned value
 */

int print_rev(char *s)
{

	int len = 0, l = 0;

	while (s[len] != '\0')
		len++;

	for  (l = len - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}

	return (_strlen(s));
}
