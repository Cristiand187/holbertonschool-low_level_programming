#include "hash_tables.h"
#include<stdio.h>
#include<string.h>

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value
 * @key: key is the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int find_idx;
	hash_node_t *new_node, *current;

	if (ht == NULL || key == NULL)
		return (0);

	find_idx = key_index((unsigned char *)key, ht->size);

	current = ht->array[find_idx];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}


	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[find_idx];
	ht->array[find_idx] = new_node;

	return (1);
}
