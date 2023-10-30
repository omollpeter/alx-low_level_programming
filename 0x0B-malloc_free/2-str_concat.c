#include "main.h"

/**
 * str_concat - Concatenates two strings and returns a pointer to the new str
 * @s1: First string
 * @s2: Second string
 *
 * Return: pointer to concatenated string, NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s = malloc(strlen(s1) + strlen(s2) + 1);
	if (!s)
	{
		printf("Memory allocation failed.\n");
		return (NULL);
	}

	strcpy(s, s1);
	strcat(s, s2);

	return (s);
}
