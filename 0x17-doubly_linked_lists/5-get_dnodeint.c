#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 *
 * @head: double linked list
 * @index: where index is the index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i_node = 0;
	dlistint_t *current;

	current = head;

	while (current->next != NULL)
	{
		if (i_node == index)
		{
			return (current);
		}
		current = current->next;
		i_node += 1;
	}
	return (NULL);
}
