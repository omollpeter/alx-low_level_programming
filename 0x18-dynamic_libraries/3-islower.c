#include "main.h"

/**
 * _islower - Checks if a charcter is lowercase
 * @c: Character to check
 *
 * Return: 1 if lowercase
 * If not 0 is returned
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
		return (1);
	else
		return (0);
}
