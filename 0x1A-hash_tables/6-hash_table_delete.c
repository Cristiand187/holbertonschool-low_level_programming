#include "hash_tables.h"

/**
 * hash_table_delete - xx
 * @ht: xx
 * Return: xx
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0, size;
	hash_node_t *current, *aux;

	size = ht->size;
	while (idx < size)
	{
		current = ht->array[idx];

		while (current != NULL)
		{
			aux = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = aux;
		}
		ht->array[idx] = NULL;
		idx++;
	}
	free(ht->array);
	free(ht);
}
