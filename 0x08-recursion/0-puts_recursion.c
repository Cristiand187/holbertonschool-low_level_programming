#include "holberton.h"

/**
 * _puts_recursion - This function is recursion print string pointer.
 *
 * @s: String to printer
 *
 */


void _puts_recursion(char *s)
{
	_putchar(*(s + 0));
	s++;

	if (*(s + 0) != '\0')
		_puts_recursion(s);
	else
		_putchar('\n');
}
