#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key from hash table
 * @ht: Hash table
 * @key: The key
 *
 * Return: pointer to value associated with key, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	unsigned long int idx;

	idx = key_index((unsigned char *) key, ht_size);

	if (ht->array[idx] == NULL)
		return (NULL);

	value = ht->array[idx]->value;
	return (value);
}
