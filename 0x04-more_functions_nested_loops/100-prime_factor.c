#include "holberton.h"
#include <stdio.h>

void print_prime_factors(long int);
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int Num = 612852475143;

	print_prime_factors(Num);
	return (0);
}


/**
 * print_prime_factors - xxx
 *
 * @n: vv
 * Return: Description of the returned value
 */

void print_prime_factors(long int n)
{
	int a = 2, factor = 0;

	while (a <= n)
	{
		if ((n % a) == 0)
		{
			n = n / a;

			factor = a;
			continue;
		}
		a++;
	}

	int p = 0, con = 0;

	while (factor > 0)
	{
		p = factor % 10;
		factor = factor / 10;
		con = con + 1;
	}

	int fa[con - 1];

	con = 0;
	while (a > 0)
	{
		p = a % 10;
		a = a / 10;
		fa[con] = p;
		con = con + 1;
	}

	int l = 0;

	for (l = con - 1; l >= 0; l--)
	{
		putchar(fa[l] + '0');
	}

	putchar('\n');
}
