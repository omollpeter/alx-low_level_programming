#include "main.h"

/**
 * _strspn - Computes length of initial segment that consists of specific chars
 * @s: String that segment is derived from
 * @accept: string whose characters will be searched in s
 *
 * Return: Length of the segment that contains accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int j = 0;
	int span = 0;

	while (s[i++])
		len1++;
	while (accept[j++])
		len2++;

	for (i = 0; i < len2; i++)
	{
		int counter = 0;

		for (j = 0; j < len1; j++)
		{
			counter++;
			if (accept[i] == s[j])
			{
				span = (counter > span) ? counter : span;
				counter = 0;
				break;
			}
		}
	}

	return ((unsigned int) span);
}
