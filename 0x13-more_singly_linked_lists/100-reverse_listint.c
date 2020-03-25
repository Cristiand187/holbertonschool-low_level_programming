#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list..
 * @head: Double pointer to list struct
 * Return: head linked list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *index;

	if (head == NULL)
		return (NULL);

	tmp = NULL;

	while (*head != NULL)
	{
		index = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = index;
	}

	*head = tmp;

	return (*head);
}
