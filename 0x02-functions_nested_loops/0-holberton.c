#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char hola[10] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\n'};
int i = 0;

for (i = 0; i < 10; i++)
	_putchar(hola[i]);

return (0);
}
