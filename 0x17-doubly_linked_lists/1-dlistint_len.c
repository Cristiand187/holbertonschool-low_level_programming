#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that prints all the elements of a dlistint_t list.
 * @h: Doubly linked lists
 * Return:  the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_nodes;

	if (h == NULL)
	{
		return (EXIT_FAILURE);
	}

	while (h != NULL)
	{
		n_nodes += 1;
		h = h->next;
	}

	return (n_nodes);

}
