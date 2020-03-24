#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index.
 * @head: Double pointer to list
 * @index: index the list delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete, *idx;
	unsigned int count = 1;

	if (head == NULL)
		return (-1);

	idx = *head;


	while (idx != NULL)
	{
		if (index == 0)
		{
			*head = idx->next;
			free(idx);
			return (1);
		}
		if (count == index)
		{
			delete = idx->next;
			idx->next = delete->next;
			free(delete);
			return (1);
		}
		idx = idx->next;
		count++;
	}

	return (-1);
}
