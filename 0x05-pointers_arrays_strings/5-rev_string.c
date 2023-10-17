#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	int len = 0;
	char *rev_s = s;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len += 1;
	}

	for (i = 0; i <= len; i++)
	{
		rev_s[i] = s[i];
	}

	for (i = len; i > 0; i--)
	{
		s[j++] = rev_s[i];
	}
}
