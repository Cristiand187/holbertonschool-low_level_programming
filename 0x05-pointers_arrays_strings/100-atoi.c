#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * _strcpy - xxx
 *
 * @dest: this is des
 * @src: zz
 * Return: Description of the returned value
 */


int _atoi(char *s)
{

	int i = 0, n = 0, pn = 0;

	int Signo = 1;

	while (s[n] != '\0')
		n++;

	for (i = 0; i <= n; i++)
	{
		if (s[i] > '0' && s[i] < '9')
		{
			pn = i;
			i = n;
		}
	}

	printf("%d\n", pn);
	
	for (i = 0; i <= pn; i++)
	{
		if (s[i] == '-')
		{
			Signo = Signo * -1;
		   
		}

	}

	printf("%d\n", Signo);

	return (1);
}
