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

	new_hash_teble = malloc(sizeof(hash_table_t) * size);
	if (new_hash_teble == NULL)
		return NULL;

	new_hash_teble->size = size;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_hash_teble);
		return NULL;
	}
	

	new_hash_teble->array = new_node;

	return (new_hash_teble);
}
