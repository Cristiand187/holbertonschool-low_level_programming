#include "holberton.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * 
 */
void print_alphabet_x10(void)
{
for (int i = 0; i < 10; ++i)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
	_putchar(c);

_putchar('\n');
}
}
