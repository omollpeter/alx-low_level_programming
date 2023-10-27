#include "main.h"

/**
 * _strncat - Adds a specified number of strings from source to destination
 * @dest: Destination
 * @src: Source
 * @n: Maximum no of characters to add
 *
 * Return: Destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
		len += 1;

	for (i = 0; i < n; i++)
	{
		dest[len] = src[i];
		len++;

		if (src[i] == '\0')
			break;
	}

	if (dest[len] != '\0')
		dest[len] = '\0';

	return (dest);
}
