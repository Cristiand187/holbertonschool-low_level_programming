#include "holberton.h"

/**
 * _islower - Entry point
 *
 * Return: Always void.
 */
int _islower(int n)
{
	if (n >= 97 && n <= 122)
		return (1);
	else
		return (0);
}
