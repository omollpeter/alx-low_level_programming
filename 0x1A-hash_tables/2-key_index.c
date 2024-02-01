#include "hash_tables.h"

/**
 * key_index - Finds the index associated with a key
 * @key: The key (string)
 * @size: Size of the array of the hash table
 *
 * Return: The index at which the key/value pair shld be stored in the array
 * of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
