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
	void *ptr;

	if (!(nmemb || size))
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	memset(ptr, 0, nmemb);

	return (ptr);
}
