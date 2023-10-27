#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to search
 * @accept: Bytes/Characters to search
 *
 * Return: A pointer to byte in s that matches one of bytes in accept
 * Otherwise, returns a null pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int len1 = 0;
	int len2 = 0;
	int span = 0;
	char *pc = NULL;

	int i = 0;
	int j = 0;

	while (s[i++])
		len1++;
	while (accept[j++])
		len2++;

	for (i = 0; i < len2; i++)
	{
		for (j = 0; j < len1; j++)
		{
			if (i == 0 && accept[i] == s[j])
			{
				span = j;
				pc = &s[span];
				break;
			}
			else if (i > 0 && accept[i] == s[j])
			{
				if (j < span)
				{
					span = j;
					pc = &s[span];
					break;
				}
			}
		}
	}

	return (pc);
}
