#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - This function that returns the nth node of a
 * listint_t linked list.
 * @head: list struct
 * @index: the index of the node
 * Return: the nth node of a list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (index == count)
		{
			return (head);
		}

		count++;
		head = head->next;
	}
	return (NULL);
}
