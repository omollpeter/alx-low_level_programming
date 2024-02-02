#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table
 * @key: The key (String)
 * @value: Value to be stored (string)
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hn, *temp;
	unsigned long int idx;
	char *value_cpy;

	if (key == NULL || strlen(key) == 0)
		return (0);

	idx = key_index((unsigned char *) key, ht_size);
	hn = malloc(sizeof(hash_node_t));
	if (!hn)
		return (0);

	value_cpy = strdup(value);

	hn->key = (char *) key;
	hn->value = value_cpy;
	hn->next = NULL;
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = hn;
		return (1);
	}
	else
	{
		temp = ht->array[idx];
		hn->next = temp;
		ht->array[idx] = hn;
		return (1);
	}
}
