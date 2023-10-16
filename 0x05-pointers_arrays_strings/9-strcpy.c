#include "main.h"

/**
 * _strcpy - Copies a string
 * @dest: Where to copy
 * @src: String to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	for (i = 0; *(src + 1) != '\0'; i++)
		len += 1;

	for (i = 0; i <= len; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
