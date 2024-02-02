#include "hash_tables.h"

unsigned long int ht_size = 0;

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the hash table
 *
 * Return: Pointer to the newly created hash table, NULL otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t *hn;
	unsigned long int i;

	ht_size = size;
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(hn) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
