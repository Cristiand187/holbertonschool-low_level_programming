#include "holberton.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
	_putchar(c);

_putchar('\n');
return (0);
}