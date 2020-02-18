#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - xxx
 *
 * @s: yy
 * Return: Description of the returned value
 */


void rev_string(char *s)
{

	int len = 0, l = 0;

	while (s[len] != '\0')
		len++;

	char inv[len];

	for (l = len - 1; l >=  0; l--)
	{
		inv[(len - 1) - l] = s[l];
	}

	for (l = 0; l < len; l++)
	{
		s[l] = inv[l];
	}
}
