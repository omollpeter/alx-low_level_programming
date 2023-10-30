#include "main.h"

/**
 * _strdup - Creates and returns copy of the passed string parameter
 * @str: String to be copied
 *
 * Return: Pointer to duplicated string, otherwise NULL
 */
char *_strdup(char *str)
{
	char *str_copy;

	str_copy = malloc(strlen(str) + 1);
	if (!str_copy)
	{
		printf("Memory allocation failed.\n");
		return (NULL);
	}

	strcpy(str_copy, str);

	return (str_copy);
}
