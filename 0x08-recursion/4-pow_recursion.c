#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - This function is the print string pointer reverse.
 *
 * @x: String to printer
 * @y: yyy
 *
 * Return: xxx
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
	else if (y < 0)
		return (-1);
	else
		return (1);
}
