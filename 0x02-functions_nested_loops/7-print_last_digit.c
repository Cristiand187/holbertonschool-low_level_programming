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

lastDigit = fabs(n % 10);

_putchar(lastDigit + '0');

return (lastDigit);
}
