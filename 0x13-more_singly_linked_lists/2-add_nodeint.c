#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * add_nodeint - This function adiments a node at the beginning
 * @head: punter to punter to list
 * @n: number to data struct.
 *
 * Return: punter new the list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = *head;
	*head = new;

	return (new);
}
