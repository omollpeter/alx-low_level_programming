#include "main.h"

/**
 * string_toupper - Converts any lowercase in a string to uppercase
 * @s: String to convert
 *
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i++])
	{
		if (s[i] >= 97 && s[i] < 123)
			s[i] = s[i] - 32;
	}

	return (s);
}
