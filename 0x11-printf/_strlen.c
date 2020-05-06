#include "holberton.h"

/**
 * _strlen - This function is count number charateres
 *
 * @s: string
 * Return: Description of the returned value
 */


int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
