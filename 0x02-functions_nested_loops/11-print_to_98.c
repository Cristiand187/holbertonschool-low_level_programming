#include "holberton.h"

/**
 * print_to_98 - Entry point n
 *
 *
 * Return: Always n.
 */
void print_to_98(int n)
{
	char a = '0', b ='0';
	_putchar(n);

	for (a = '0'; a <= '9'; a++)
		{
			for (b = '0'; b <= '9'; b++)
				{
					if(a != '0')
						_putchar(a);

					if (b != '9' && a != '9')
						{
					_putchar(b);
			       
				       _putchar(',');
				       _putchar(' ');
						}
				       

}
		
			      
		}
}
