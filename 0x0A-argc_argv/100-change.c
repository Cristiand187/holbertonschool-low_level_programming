#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This function print number the arguments
 * @argc: The number of arguments
 * @argv: Each string is one of the arguments that was passed to the program
 * Return: value 0
 */


int main(int argc, char *argv[])
{
	int cents = 0, n_change = 0, i = 0;
	int change[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	cents = atoi(argv[argc - 1]);

	for (i = 0; i <= 4; i++)
	{
		while (change[i] <= cents)
		{
			cents = cents - change[i];
			n_change++;
		}
	}

	printf("%i\n", n_change);

	return (0);
}
