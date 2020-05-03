#include "lists.h"


/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 *
 *  @head: doubly linked list
 *  @n: number add in node
 *  Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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

	if (current == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;

	}
	else
	{
		new->n = n;
		new->prev = NULL;
		new->next = current;
		current->prev = new;
		*head = new;
	}

	return (new);
}
