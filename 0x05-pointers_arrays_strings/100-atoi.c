#include "holberton.h"

/**
 * _atoi - This function that convert a string to an integer
 *
 * @s: number in the string can be preceded by an infinite number of characters
 * Return: Number into the string
 */


int _atoi(char *s)
{

	int n = 0, Signo = 1;

	do {
		if (*s == '-')
			Signo = Signo * -1;

		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');

		else if (n > 0)
			break;

	} while (*s++);

	return (n * Signo);
}
