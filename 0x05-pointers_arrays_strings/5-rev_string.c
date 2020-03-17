#include "holberton.h"

/**
 * rev_string - xxx
 *
 * @s: yy
 * Return: Description of the returned value
 */


void rev_string(char *s)
{

	int len = 0, l = 0;
	char aux;

	while (s[len] != '\0')
		len++;

	for (l = 0; l < len; l++)
	{
		aux = s[l];
		s[l] = s[len - 1];
		s[len - 1] = aux;
		len--;
	}
}
