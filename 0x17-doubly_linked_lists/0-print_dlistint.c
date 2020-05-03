#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: Doubly linked lists
 * Return:  the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes;

	if (h == NULL)
	{
		return (EXIT_FAILURE);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n_nodes += 1;
		h = h->next;
	}

	return (n_nodes);

}
