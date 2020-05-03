#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a linked list
 *
 * @head: Double linked list
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum_n = 0;

	current = head;
	while (current != NULL)
	{
		sum_n += current->n;
		current = current->next;
	}
	return (sum_n);
}
