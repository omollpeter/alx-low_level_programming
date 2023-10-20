#include "main.h"

/**
 * infinite_add - Adds two strings whose content are integers
 * @n1: First string number
 * @n2: Second string number
 * @r: String to store the result of addition
 * @size_r: Length of r
 *
 * Return: pointer to r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = (int) strlen(n1);
	int len2 = (int) strlen(n2);
	int i;
	int j;
	int k = 0;
	int carryover = 0;

	if (size_r <= len1 + 1 || size_r <= len2 + 1)
		return (0);

	i = len1 - 1;
	j = len2 - 1;

	while (i >= 0 || j >= 0 || carryover)
	{
		int val1 = (i >= 0) ? n1[i] - '0' : 0;
		int val2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = val1 + val2 + carryover;

		r[k++] = sum % 10 + '0';
		if (i >= 0)
			i--;
		if (j >= 0)
			j--;
	}
	r[k] = '\0';

	int lenr = (int) strlen(r);

	for (i = lenr; i >= lenr / 2; i--)
	{
		char temp;

		temp = r[i];
		r[i] = r[lenr - i - 1];
		r[lenr - i - 1] = temp;
	}

	return (r);
}
