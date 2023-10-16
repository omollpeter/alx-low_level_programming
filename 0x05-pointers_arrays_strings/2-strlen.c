#include "main.h"

/**
 * _strlen - Counts the number of characters in a string
 * @s: Array of characters to count
 *
 * Return: Number of characters in the given string
 */
int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; *s++)
	{
		len++;
	}

	return (len);
}
