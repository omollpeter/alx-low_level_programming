#include "main.h"

/**
 * print_sign - Checks an integer and prints +. -, or 0
 * @n: Integer to be checked
 *
 * Return: 1 if positive, 0 if equals 0 or -1 if negative
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar(48);
		result = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		result = -1;
	}

	return (result);
}
