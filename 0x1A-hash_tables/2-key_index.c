#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: key is the key
 * @size: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int find_idx;

	find_idx = hash_djb2(key);
	return (find_idx % size);
}
