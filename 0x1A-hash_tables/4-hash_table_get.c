#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: the hash table you want to add or update the key/value
 * @key: key is the key
 * Return: 1 if it succeeded, 0 otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int find_idx;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	find_idx = key_index((unsigned char *)key, ht->size);

	current = ht->array[find_idx];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}
