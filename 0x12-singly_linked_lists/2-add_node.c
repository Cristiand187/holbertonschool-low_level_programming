#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * _strlen - This function is count number charateres
 *
 * @s: string
 * Return: Description of the returned value
 */


int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * add_node - check the code for Holberton School students.
 * @head: punter to list
 * @str: string to data struct.
 *
 * Return: punter the list.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(strdup(str));
	new->next = *head;
	*head = new;

	return (*head);
}
