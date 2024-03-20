#include "sorted_hash.h"

unsigned long int ht_size = 0;

/**
 * shash_table_create - Creates a hash table
 * @size: Size of the hash table
 *
 * Return: Pointer to the newly created hash table, NULL otherwise
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	shash_node_t *hn;
	unsigned long int i;

	ht_size = size;
	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hn) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}


/**
 * shash_table_set - Adds an element to the hash table
 * @ht: Hash table
 * @key: The key (String)
 * @value: Value to be stored (string)
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *hn, *temp1, *temp2;
	unsigned long int idx;
	char *temp_value;

	if (!ht)
		return (0);
	if (key == NULL || strlen(key) == 0)
		return (0);
	idx = key_index((unsigned char *) key, ht_size);
	hn = malloc(sizeof(shash_node_t));

	hn->value = strdup(value);
	hn->key = strdup(key);
	hn->next = NULL;
    hn->snext = NULL;
    hn->sprev = NULL;
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = hn;
        if (ht->shead == NULL)
            ht->shead == hn;
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
