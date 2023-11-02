#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements in the array
 * @size: Size of each element in the array
 *
 * Return: Pointer to the allocated memory, NULL otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (!(nmemb || size))
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
