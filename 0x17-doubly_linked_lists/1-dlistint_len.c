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
	const dlistint_t *current;
	size_t n_nodes = 0;

	current = h;

	while (current != NULL)
	{
		n_nodes += 1;
		current = current->next;
	}

	return (n_nodes);

}
