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
	const dlistint_t *current;
	size_t n_nodes = 0;

	if (h == NULL)
	{
		return (EXIT_FAILURE);
	}

	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		n_nodes += 1;
		current = current->next;
	}

	return (n_nodes);

}
