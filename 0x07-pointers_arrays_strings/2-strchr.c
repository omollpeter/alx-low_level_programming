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
	unsigned long i;

	for (i = 0; i < sizeof(s) / sizeof(s[0]); i++)
	{
		if (s[i] == c)
		{
			pc = &s[i];
			break;
		}

	return (pc);
}
