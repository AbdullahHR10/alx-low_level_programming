#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the table
 * Return: a pointer to the created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = (hash_table_t *)malloc(sizeof(hast_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}
	hash_table->size = size;
	hash_table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (unsigned int i; i < size; ++i)
	{
		hast_table->array[i] = NULL;
	}
	return (hash_table)
}
