#include "hash_tables.h"

/**
 * hash_table_delete - Prints a hash table
 * @ht: Hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	for (i = 0; i < ht_size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (ht->array[i] != NULL)
			{
				temp = ht->array[i];
				ht->array[i] = ht->array[i]->next;
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
