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
	long int Num = 1231952;

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

	while (n != 1)
	{
		if ((n % a) == 0)
		{
			n = n / a;

			factor = a;
			continue;
		}
		a++;
	}

	printf("%d\n", factor);
}
