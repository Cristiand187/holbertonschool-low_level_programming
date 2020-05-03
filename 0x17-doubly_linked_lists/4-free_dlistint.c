#include "lists.h"

/**
 * free_dlistint - function that free a dlistint_t list.
 *
 * @head: doubly linked list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *clear;

	current = head;
	while (current != NULL)
	{
		clear = current;
		current = current->next;
		free(clear);
	}
}
