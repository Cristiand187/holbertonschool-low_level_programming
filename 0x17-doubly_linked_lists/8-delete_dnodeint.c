#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index.
 * @head: Double pointer to list
 * @index: index the list delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete, *idx;
	unsigned int count = 1;

	if (head == NULL || *head == NULL)
		return (-1);

	idx = *head;

	while (idx != NULL)
	{
		if (index == 0)
		{
			*head = idx->next;
			if (idx->next != NULL)
				idx->next->prev = NULL;
			free(idx);
			return (1);
		}
		if (count == index)
		{
			delete = idx->next;
			if (!delete)
				return (-1);
			idx->next = delete->next;
			if (delete->next)
				delete->next->prev = delete->prev;
			free(delete);
			return (1);
		}
		idx = idx->next;
		count++;
	}

	return (-1);
}
