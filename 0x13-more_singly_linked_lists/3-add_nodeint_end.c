#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - This function editions a node at the end.
 * @head: punter to list
 * @n: number to data struct.
 *
 * Return: new punter the list.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	end = *head;

	while (end->next != NULL)
		end = end->next;

	end->next = new;

	return (*head);
}
