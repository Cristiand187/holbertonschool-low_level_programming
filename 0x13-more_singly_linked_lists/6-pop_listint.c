#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * pop_listint - function that deletes the head node of a list.
 * @head: punter to punter to list
 *
 * Return: value the head node’s.
 */

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int n;

	if (head == NULL)
		return (0);

	pop = *head;

	n = pop->n;
	*head = pop->next;
	free(pop);

	return (n);
}
