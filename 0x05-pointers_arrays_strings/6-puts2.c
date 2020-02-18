#include "holberton.h"

/**
 * puts2 - xxx
 *
 * @str: yy
 * Return: Description of the returned value
 */


void puts2(char *str)
{

	int len = 0, l = 0;

	while (str[len] != '\0')
		len++;

	for (l = 0; l < len; l++)
	{
		if ((l % 2) == 0)
			_putchar(str[l]);
	}
	_putchar('\n');
}
