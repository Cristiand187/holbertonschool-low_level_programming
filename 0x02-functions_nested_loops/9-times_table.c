#include "holberton.h"

/**
 * times_table - Entry point n
 *
 *
 * Return: Always n.
 */
void times_table(void)
{
	int a = 47, b = 47;
	

	for (a = 47; a < 57; a++)
		{
		        	for (b = 0; b < 9; b++)
				{

					_putchar(a);
					_putchar(',');
				       _putchar(' ');
				       

}
			for (b = 0; b < 9; b++)
				{

					_putchar(b);
					_putchar(',');
				       _putchar(' ');
				       

}
				_putchar('\n');
		}
}
