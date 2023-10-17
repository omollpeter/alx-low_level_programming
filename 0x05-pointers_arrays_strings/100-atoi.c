#include "main.h"

/**
 * _atoi - Converts integer to string
 * @s: String to convert
 *
 * Return: integer from the string
 */
int _atoi(char *s)
{
	int i = 0;
	int negs = 0;
	int number = 0;

	while (s[i] < 48 || s[i] > 57)
	{
		if (s[i++] == 45)
			negs++;
	}

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 48 && *(s + i) < 58)
		{
			number = number * 10 + (s[i] - '0');

			if (!*(s + j) >= 48 && !*(s + j) < 58)
				break;
		}
	}

	if (negs % 2 != 0)
		number = -number;

	return (number);
}
