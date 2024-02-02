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
	hash_node_t *temp;

	putchar('{');
	for (i = 0; i < ht_size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (ht->array[i])
		{
			temp = ht->array[i];
			count++;
			if (i && count > 1)
				printf(", ");
			while (temp != NULL)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				temp = temp->next;
				if (temp)
				{
					printf(", ");
				}
			}
		}

	}
	printf("}\n");
}
