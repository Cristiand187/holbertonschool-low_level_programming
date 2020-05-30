#include "hash_tables.h"

/**
 * hash_table_print - function that retrieves a value associated with a key
 * @ht: the hash table you want to add or update the key/value
 * Return: Noting
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0, size;
	hash_node_t *current;
	unsigned int n_nodes = 0;

	printf("{");

	size = ht->size;

	while (idx < size)
	{
		current = ht->array[idx];

		while (current != NULL)
		{
			if (n_nodes != 0)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			n_nodes++;
		}

		idx++;

	}
	printf("}\n");

}
