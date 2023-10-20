#include "main.h"

/**
 * print_number - Prints an int value
 * @n: Number to print
 *
 * Return: void
 */
void print_number(int n)
{
	if (n > INT_MIN && n < 0)
	{
		_putchar('-');
		n = n / -1;
	}

	if (n / 10)
		print_number(n / 10);

	if (n >= 0)
		_putchar(n % 10 + '0');

	if (n == INT_MIN)
		_putchar(-(n / 10) + '0');

}
