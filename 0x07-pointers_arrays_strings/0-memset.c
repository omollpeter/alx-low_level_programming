#include "main.h"

/**
 * _memset - Fills the first n characters of an array with constant byte
 * @s: Array to fill
 * @b: Constant byte
 * @n: Number of characters to fill
 *
 * Return: pointers to s (array s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
