#include "holberton.h"

/**
 * _strstr - this function that fills memory with a constant byte.
 *
 * @haystack: Parameter bytes of the memory area pointed.
 * @needle: Parameter the constant byte.
 *
 * Return: Returns a pointer to the memory area
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, van = 0;
	char *p;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			p = &haystack[i];
			for (j = 1;  needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j]
				    && haystack[i + j] != '\0')
				{
					van = 1;
				}
			}
		}
	}
	if (van == 0)
		return (p);
	else
		return (0);
}
