#include "holberton.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_alphabet_x10(void)
{
for (int i = 0; i < 10; i++)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
	_putchar(c);

_putchar('\n');
}
return (0);
}
