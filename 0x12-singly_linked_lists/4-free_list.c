#include <stdio.h>
#include "lists.h"

/**
 * free_list - check the code for Holberton School students.
 * @head: list struct
 * Return: number to the list.
 */

void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
