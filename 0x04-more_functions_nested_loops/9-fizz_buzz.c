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
			printf("FizzBuzz ");
		else
		{
			if ((i % 3) == 0)
				printf("Fizz ");
			else if ((i % 5) == 0)
				printf("Buzz ");
			     else
				     printf("%d ", i);
	      }
	}
	printf("\n");
}
