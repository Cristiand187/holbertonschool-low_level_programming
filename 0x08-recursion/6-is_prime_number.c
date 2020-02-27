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
	if (base % n == 0 || base < 2)
		return (0);
	else if (base - 1 == n)
		return (1);
	else if (n < base)
		return (function(n + 1, base));
	else
		return (1);
}

/**
 * is_prime_number - This function is the print string pointer reverse.
 *
 * @n: String to printer
 *
 * Return: xxx
 */

int is_prime_number(int n)
{
	int a = 0;

	a = function(2, n);
	return (a);
}
