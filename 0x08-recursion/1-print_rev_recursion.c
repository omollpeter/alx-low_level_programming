#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse using recursion
 * @s: String to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
