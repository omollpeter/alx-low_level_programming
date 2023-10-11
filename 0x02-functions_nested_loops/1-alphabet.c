#include "main.h"

/**
 * print_alphabet - Prints all lowercase characters followed by newline
 *
 * Return: void always
 */
void print_alphabet(void)
{
	int i;

	i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
