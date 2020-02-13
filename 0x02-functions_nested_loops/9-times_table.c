#include "holberton.h"

/**
 * times_table - Entry point n
 *
 *
 * Return: Always n.
 */
void times_table(void)
{
int a = 0, b = 0, c = 0;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (c < 10)
{
if (b != 0)
	_putchar(' ');

_putchar(c + '0');
}
else
{
_putchar(c / 10 + '0');
_putchar(c % 10 + '0');

}
if (b != 9)
{
_putchar(',');
_putchar(' ');
}

}
_putchar('\n');
}
}
