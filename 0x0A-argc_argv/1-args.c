#include "holberton.h"
#include <stdio.h>

/**
 * main - This function print number the arguments
 * @argc: The number of arguments
 * @argv: Each string is one of the arguments that was passed to the program
 * Return: value 0
 */


int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
		(void)argv;
	}

	return (0);
}
