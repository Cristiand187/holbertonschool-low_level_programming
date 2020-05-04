#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 *
 * @h: dloubly linked list
 * @idx: add the new node at index idx
 * @n: number of the node
 *
 * Return: new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	unsigned int n_nodes = 0;

	current = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (h == NULL || *h == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = current;
		new->prev = NULL;
		current->prev = new;
		*h = new;
		return (new);
	}
	while (current->next != NULL)
	{
		if (n_nodes == idx)
		{
			new->prev = current->prev;
			new->next = current;
			if (current->prev)
				current->prev->next = new;
			current->prev = new;
			return (new);
		}
		n_nodes += 1;
		current = current->next;
	}
	free(new);
	return (NULL);
}
