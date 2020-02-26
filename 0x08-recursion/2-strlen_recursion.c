#include "holberton.h"
#include <stdio.h>

/**
 * _print_rev_recursion - This function is the recursion print string pointer reverse.
 *
 * @s: String to printer
 *
 */

int _strlen_recursion(char *s)
{

	if (*(s + 0) != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
		return (0);

}
