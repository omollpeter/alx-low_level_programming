#include "main.h"

/**
 * _realloc - Resizes a previously allocated memory block
 * @ptr: Previously allocated memory block
 * @old_size: Size in bytes of the prev allocated block
 * @new_size: New size to allocate to ptr
 *
 * Return: Pointer to the new resized block, NULL otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (!ptr)
			return (NULL);
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	copy_size = (new_size < old_size) ? new_size : old_size;

	memcpy(new_ptr, ptr, copy_size);
	free(ptr);

	return (new_ptr);
}
