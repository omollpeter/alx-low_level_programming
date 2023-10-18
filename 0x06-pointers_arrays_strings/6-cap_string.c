#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: String to capitalize
 *
 * Return: Capitalized string
 */
char *cap_string(char *s)
{
	int i;
	int j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		j = i + 1;

		if (i == 0 && s[i] >= 97 && s[i] < 123)
			s[i] = s[i] - 32;

		switch (s[i])
		{
		case ',':
		case '{':
		case '}':
		case ')':
		case '(':
		case '"':
		case '?':
		case ' ':
		case '\n':
		case '!':
		case ';':
		case '\t':
		case '.':
			if (s[j] >= 97 && s[j] < 123)
				s[j] = s[j] - 32;
			break;
		default:
			break;
		}
	}
	return (s);
}
