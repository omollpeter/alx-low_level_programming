#include "main.h"

/**
 * _strstr - Locates substring in a string
 * @haystack: String
 * @needle: Substring
 *
 * Return: Pointer to the first character in the substr else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *pc = NULL;
	int i = 0;
	int len1 = 0;
	int len2 = 0;

	while (haystack[i++])
		len1++;

	i = 0;
	while (needle[i++])
		len2++;

	for (i = 0; i < len1; i++)
	{
		if (needle[0] == haystack[i])
		{
			int end = i + len2 - 1;

			if (needle[len2 - 1] == haystack[end])
			{
				pc = &haystack[i];
				break;
			}
		}
	}

	return (pc);
}
