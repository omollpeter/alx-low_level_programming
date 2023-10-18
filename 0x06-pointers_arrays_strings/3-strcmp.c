#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: difference btw first different characters on the same position
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff;
	int len = 0;

	while (s1[i++])
		len++;

	for (i = 0; i <= len; i++)
	{
		if (s1[i] == s2[i])
		{
			diff = 0;
			continue;
		}
		else
		{
			diff = s1[i] - s2[i];
			break;
		}

	return (diff);
}
