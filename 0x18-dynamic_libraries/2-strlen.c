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
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}

	return (len);
}
