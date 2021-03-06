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
	int i = 0, j = 0, s = 0;

	for (i = 1; i < argc; i++)
	{
		for (j  = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		s = s + atoi(argv[i]);
	}

	printf("%i\n", s);

	return (0);
}
