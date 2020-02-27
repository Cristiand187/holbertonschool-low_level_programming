#include "holberton.h"
#include <stdio.h>

/**
 * function - This function is the print string pointer reverse.
 *
 * @n: String to printer
 * @base: yyy
 *
 * Return: xxx
 */
int function(int n, int base);


int function(int n, int base)
{
	if (n * n == base)
		return (n);
	else if (n * n > base)
		return (-1);
	else
		return (function(n + 1, base));
}

/**
 * _sqrt_recursion - This function is the print string pointer reverse.
 *
 * @n: String to printer
 *
 * Return: xxx
 */

int _sqrt_recursion(int n)
{
	return (function(1, n));
}
