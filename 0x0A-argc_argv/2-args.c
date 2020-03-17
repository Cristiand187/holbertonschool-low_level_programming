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
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
