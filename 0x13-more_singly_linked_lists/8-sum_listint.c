#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a
 * linked list.
 * @head: pointer to list struct
 * Return: the sum of all the data (n).
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;

		head = head->next;
	}
	return (sum);
}
