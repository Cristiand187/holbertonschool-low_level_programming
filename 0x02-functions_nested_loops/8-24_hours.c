#include "holberton.h"

/**
 * jack_bauer - Entry point n
 *
 *
 * Return: Always n.
 */
void jack_bauer(void)
{
char a = 0, b = 0;

for (a = 0; a < 24; a++)
{
for (b = 0; b < 60; b++)
{
	_putchar(a / 10 + '0');
	_putchar(a % 10 + '0');
	_putchar(':');
	_putchar(b / 10 + '0');
	_putchar(b % 10 + '0');
	_putchar('\n');
}
}
}
