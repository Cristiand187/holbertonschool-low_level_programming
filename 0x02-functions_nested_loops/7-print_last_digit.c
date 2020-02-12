#include "holberton.h"
#include <math.h>

/**
 * print_last_digit - Entry point n
 *
 * @n: xx.
 * Return: Always n.
 */
int print_last_digit(int n)
{
int lastDigit = 0;
char l;
lastDigit = n % 10;

l = fabs(lastDigit);

_putchar(l + '0');

return (lastDigit);
}
