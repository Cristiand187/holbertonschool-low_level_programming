#include <stdio.h>
#include "lists.h"

/**
 * listint_len - This function counting the number of nodes.
 * @h: list struct
 * Return: number nodes to the list.
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
