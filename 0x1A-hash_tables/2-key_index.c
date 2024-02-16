#include "hash_tables.h"

/**
 * key_index - Get the index for a given key in a hash table
 * @key: The key to find the index for
 * @size: The size of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	insigned long int hash_value = hash_djb2(key);
	return (hash_value % size);
}
