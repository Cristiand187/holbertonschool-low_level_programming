#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a
 * given position.
 * @head: Double pointer to list struct
 * @idx: the index of the list where the new node should be added.
 * @n: value insert data node
 * Return: the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *index;
	unsigned int count = 1;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	index = *head;

	if (idx == 0)
	{
		new->next = index->next;
		*head = new;
		return (new);
	}

	while (index != NULL)
	{
		if (count == idx)
		{
			new->next = index->next;
			index->next = new;
			return (new);
		}
		index = index->next;
		count++;
	}

	return (NULL);
}
