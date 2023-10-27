#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination
 * @src: Source
 *
 * Return: Destination
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
		len += 1;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[len] = *(src + i);
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
