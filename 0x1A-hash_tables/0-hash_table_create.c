#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_teble;
	unsigned long int idx = 0;

	if (size < 0)
		return (NULL);

	new_hash_teble = malloc(sizeof(hash_table_t));
	if (new_hash_teble == NULL)
		return (NULL);

	new_hash_teble->size = size;

	new_hash_teble->array = malloc(sizeof(hash_node_t *) * 1024);
	if (new_hash_teble->array == NULL)
	{
		free(new_hash_teble);
		new_hash_teble = NULL;
		return (NULL);
	}

	while (idx < size)
	{
		new_hash_teble->array[idx] = (NULL);
		idx++;
	}

	return (new_hash_teble);
}
