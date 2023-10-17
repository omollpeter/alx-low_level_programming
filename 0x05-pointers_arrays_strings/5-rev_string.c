#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	char a;

	while (s[i++])
	{
		len += 1;
	}

	for (i = len - 1; i >= len / 2; i--)
	{
		a = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = a;
	}
}
