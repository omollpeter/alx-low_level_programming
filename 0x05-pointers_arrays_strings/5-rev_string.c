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

	i = 0;

	for (j = len - 1; j >= 0; j--)
	{
		s[i++] = rev_s[j];
	}
}
