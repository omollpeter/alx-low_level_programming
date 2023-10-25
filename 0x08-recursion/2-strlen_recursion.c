#include "main.h"

/**
 * _strlen_recursion - Computes the length of a string using recursion
 * @s: String
 *
 * Return: Length of s
 */
int _strlen_recursion(char *s)
{
	int counter;

	if (*s == '\0')
	{
		counter = 0;
		return (counter);
	}
	else
	{
		counter = 1;
		return (counter + _strlen_recursion(s + 1));
	}
}
