#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code for Holberton School students.
 * @h: list struct
 * Return: number to the list.
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("[%i] %s\n", h->len, h->str == NULL ? "(nil)" : h->str);

		count++;
		h = h->next;
	}
	return (count);
}
