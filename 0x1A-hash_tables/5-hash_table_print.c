#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0;

	putchar('{');
	for (i = 0; i < ht_size; i++)
	{
		if (ht->array == NULL)
			continue;
		if (ht->array[i])
		{
			count++;
			if (i && count > 1)
				printf(", ");
			while (ht->array[i] != NULL)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				ht->array[i] = ht->array[i]->next;
				if (ht->array[i])
				{
					printf(", ");
				}
			}
		}

	}
	printf("}\n");
}
