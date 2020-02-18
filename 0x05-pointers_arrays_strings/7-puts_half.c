#include "holberton.h"

/**
 * puts_half - xxx
 *
 * @str: yy
 * Return: Description of the returned value
 */


void puts_half(char *str)
{

	int len = 0, l = 0, ini = 0;

	while (str[len] != '\0')
		len++;

	if ((len % 2) == 0)
		ini = len / 2;
	else
		ini = (len) - ((len - 1) / 2);

	for  (l = ini; l < len; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
