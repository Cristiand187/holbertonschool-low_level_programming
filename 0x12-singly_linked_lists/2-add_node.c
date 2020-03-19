#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strcpy - copy to string
 *
 * @dest: this is des
 * @src: zz
 * Return: Description of the returned value
 */


char *_strcpy(char *dest, char *src)
{

	int i = 0, n = 0;

	while (src[n] != '\0')
		n++;

	for (i = 0; i <= n; i++)
		dest[i] = src[i];

	return (dest);

}

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
	int len = 0;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	len = _strlen(strdup(str));

	new->str = malloc(sizeof(char) * (len + 1));

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	_strcpy(new->str, strdup(str));
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
