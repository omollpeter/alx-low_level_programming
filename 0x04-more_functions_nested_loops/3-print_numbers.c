#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
