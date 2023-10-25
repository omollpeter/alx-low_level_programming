#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 * @s: String to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 1;

	if (strlen(s) == 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(s[0]);

	if (s[0 + i])
	{
		_puts_recursion(s + i);
		i++;
	}
	else
		_putchar('\n');
}
