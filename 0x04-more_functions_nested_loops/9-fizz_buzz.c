#include "holberton.h"
#include <stdio.h>
void print_Fizz_Buzz(void);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	
    print_Fizz_Buzz();
    return (0);
}

void print_Fizz_Buzz(void)
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
			if (i != 100)
				putchar(' ');
		}
		else
		{
			if ((i % 3) == 0)
			{
				putchar('F');
				putchar('i');
				putchar('z');
				putchar('z');
				if (i != 100)
					putchar(' ');
			}
			else if ((i % 5) == 0)
			{
				putchar('B');
				putchar('u');
				putchar('z');
				putchar('z');
				putchar(' ');
			}
			else
			{
				if (i > 9)
					putchar((i / 10) + '0');
				putchar((i % 10) +  '0');
				if (i != 100)
					putchar(' ');
			}
	      }
	}
	printf("\n");
}
