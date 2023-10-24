#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String to use
 * @c: Character to locate
 *
 * Return: Pointer to c if c is found, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	char *pc = NULL;
	int i = 0;
	int len = 0;

	while (s[i++])
		len++;

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			pc = &s[i];
			break;
		}
	}

	if (pc == NULL)
		return (NULL);
	return (pc);
}
