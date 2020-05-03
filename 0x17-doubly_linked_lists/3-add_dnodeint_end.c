#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list.
 *
 * @head: doubly linked list
 * @n: number add in node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}

	current = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (current == NULL)
	{
		*head = new;
		current = new;
		new->prev = NULL;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new->prev = current;
	}

	return (new);
}
