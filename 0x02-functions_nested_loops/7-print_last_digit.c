#include "holberton.h"

/**
 * print_last_digit - Entry point n
 *
 * @n: xx.
 * Return: Always n.
 */
int print_last_digit(int n)
{
int lastDigit = 0;

lastDigit = n % 10;
_putchar(lastDigit);
return (lastDigit);
}
