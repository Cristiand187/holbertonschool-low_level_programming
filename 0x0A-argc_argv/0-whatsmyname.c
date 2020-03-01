#include "holberton.h"
#include <stdio.h>

/**
 * main - This function print name programs
 * @argc: The number of arguments
 * @argv: Each string is one of the arguments that was passed to the program
 * Return: value 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
