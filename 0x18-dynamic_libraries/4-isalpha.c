#include "holberton.h"

/**
 * _isalpha - Entry point n
 *
 * @n: xx.
 * Return: Always n.
 */
int _isalpha(int n)
{
	if ((n >= 97 && n <= 122) || (n >= 65 && n <= 90))
		return (1);
	else
		return (0);
}
