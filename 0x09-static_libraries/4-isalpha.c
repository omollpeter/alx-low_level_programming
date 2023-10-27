#include "main.h"

/**
 * _isalpha - Checks if a charcter is a letter
 * @c: Character to check
 *
 * Return: 1 if lowercase, uppercase or letter
 * If not 0 is returned
 */
int _isalpha(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	else if (c >= 97 && c < 123)
		return (1);
	else
		return (0);
}
