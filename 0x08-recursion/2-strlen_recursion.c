#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - This function is the print string pointer reverse.
 *
 * @s: String to printer
 *
 * Return: xxx
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
