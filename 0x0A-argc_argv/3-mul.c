#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function print number the arguments
 * @argc: The number of arguments
 * @argv: Each string is one of the arguments that was passed to the program
 * Return: value 0
 */


int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
