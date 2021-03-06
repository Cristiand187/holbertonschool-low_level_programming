#include "holberton.h"
#include <stdio.h>

int function_aux(char *s, int i, int len);


/**
 * _strlen_recursion - This function is the print string pointer reverse.
 *
 * @s: String to printer
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

/**
 * function_aux - This function is the print string pointer reverse.
 *
 * @s: String to printer
 * @i: yyy
 * @len: zzz
 * Return: xxx
 */

int function_aux(char *s, int i, int len)
{
	if (i >= len)
		return (1);
	if (s[i] == s[len])
		return (function_aux(s, i + 1, len - 1));
	else
		return (0);
}

/**
 * is_palindrome - This function is the print string pointer reverse.
 *
 * @s: String to printer
 *
 * Return: xxx
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (function_aux(s, 0, len - 1));
}
