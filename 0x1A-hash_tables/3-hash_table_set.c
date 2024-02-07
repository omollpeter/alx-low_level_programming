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
	hash_node_t *hn, *temp1, *temp2;
	unsigned long int idx;
	char *temp_value;

	if (!ht)
		return (0);
	if (key == NULL || strlen(key) == 0)
		return (0);
	idx = key_index((unsigned char *) key, ht_size);
	hn = malloc(sizeof(hash_node_t));

	hn->value = strdup(value);
	hn->key = strdup(key);
	hn->next = NULL;
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = hn;
		return (1);
	}
	else
	{
		temp1 = ht->array[idx];
		temp2 = ht->array[idx];
		while (temp1 != NULL)
		{
			if (strcmp(key, temp1->key) == 0)
			{
				temp_value = temp1->value;
				temp1->value = hn->value;
				free(temp_value);
				free(hn->key);
				free(hn);
				return (1);
			}
			temp1 = temp1->next;
		}
		hn->next = temp2;
		ht->array[idx] = hn;
		return (1);
	}
}
