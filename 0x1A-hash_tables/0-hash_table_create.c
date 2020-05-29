#include "hash_tables.h"

/**
 * hash_table_create -
 *
 * Return:
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_teble;
	hash_node_t **new_node;
	unsigned long int idx = 0;

	new_hash_teble = malloc(sizeof(hash_table_t));
	if (new_hash_teble == NULL)
		return NULL;

	new_hash_teble->size = size;

	new_node = malloc(sizeof(hash_node_t *) * 1024);
	if (new_node == NULL)
	{
		free(new_hash_teble);
		return NULL;
	}
	
	while (idx < size)
	{
		new_node[idx] = NULL;
		idx++;
	}
	new_hash_teble->array = new_node;

	return (new_hash_teble);
}
