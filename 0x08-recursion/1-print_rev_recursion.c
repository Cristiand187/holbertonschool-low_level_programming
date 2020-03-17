#include "holberton.h"

/**
 * _print_rev_recursion - This is the recursion print string pointer reverse.
 *
 * @s: String to printer
 *
 */


void _print_rev_recursion(char *s)
{
	if (*(s) != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*(s - 1));
	}
}
