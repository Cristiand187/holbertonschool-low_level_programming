#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c, d;
/*for :*/
for (c = '0'; c <= '9'; ++c)
{
	for (d = c + 1; d <= '9'; ++d)
	{
		putchar(c);
		putchar(d);
		if (d != '9' || c != '8')
		{
		putchar(',');
		putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
