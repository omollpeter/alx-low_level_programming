#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination (where to copy)
 * @src: Memory area to copy
 * @n: Number of characters from src to copy
 *
 * Return: Pointer to destination (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}

	return (dest);
}
