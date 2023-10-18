#include "main.h"

/**
 * _strncpy - Copies specific no of characters to from str to another str
 * @dest: Destination
 * @src: Source
 * @n: Number of characters to copy
 *
 * Return: Destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (src[i++])
		len += 1;

	for (i = 0; i < n; i++)
	{
		if (i >= len)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}

	return (dest);
}
