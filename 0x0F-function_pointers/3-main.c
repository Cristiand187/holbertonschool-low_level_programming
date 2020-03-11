#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "3-calc.h"

/**
 * main - This function print name programs
 * @argc: The number of arguments
 * @argv: Each string is one of the arguments that was passed to the program
 * Return: value 0
 */

int main(int argc, char *argv[])
{
	int calc = 0;

	if (argc <= 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
		&& atoi(argv[3]) == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}

	if (argc > 0)
	{
		calc = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", calc);
	}
	return (0);
}
