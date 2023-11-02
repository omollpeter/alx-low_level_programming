#include "main.h"

/**
 * string_nconcat - Concatenates two strings with the first n bytes of s2
 * @s1: Destination
 * @s2: Source
 * @n: First n characters from s2 to concatenate
 *
 * Return: Pointer to the concatenated string, NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	new_str = malloc(strlen(s1) + n + 1);
	if (!new_str)
		return (NULL);

	strcpy(new_str, s1);
	strncat(new_str, s2, n);

	return (new_str);
}
