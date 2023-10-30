#include "main.h"

/**
 * create_array - Creates an array and initializes it with specific char
 * @size: Length of the array to be created
 * @c: Initialization character
 *
 * Return: A pointer to the created array, otherwise NULL if it fails or
 *			if size == 0
 */
char *create_array(unsigned int size, char c)
{
	char *ch_arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch_arr = malloc(size * sizeof(char));

	if (!ch_arr)
	{
		printf("Memory allocation failed.\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ch_arr[i] = c;

	return (ch_arr);
}
