#include "main.h"

/**
 * rot13 - Encodes a string using rot13 encryption
 * @s: String to encode
 *
 * Return: Encoded string
 */
char *rot13(char *s)
{
	int i;
	int j;
	char *letters = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *rot = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(letters + j); j++)
		{
			if (s[i] == letters[j])
				s[i] = rot[j];
		}
	}

	return (s);
}
