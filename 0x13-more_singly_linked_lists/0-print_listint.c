#include <stdio.h>
#include "lists.h"

/**
 * print_listint - check the code for Holberton School students.
 * @h: list struct
 * Return: number to the list.
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);

		count++;
		h = h->next;
	}
	return (count);
}
