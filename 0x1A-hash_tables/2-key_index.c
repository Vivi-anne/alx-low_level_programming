#include "hash_tables.h"

/**
 * key_index - Get the index at which a key
 *             should be stored in array of a hash table.
 * @key: name of the key
 * @size: The size of the hash table array.
 *
 * Return: The index that corresponds to the given key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
