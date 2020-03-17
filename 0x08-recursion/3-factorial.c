#include "holberton.h"
#include <stdio.h>

/**
 * factorial - This function is the print string pointer reverse.
 *
 * @n: String to printer
 *
 * Return: xxx
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
