#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Integer whose last digit is printed
 *
 * Return: Last digit of integer n
 */
int print_last_digit(int n)
{
	int ld;

	if (n >= 0)
	{
		ld = n % 10;
		_putchar(ld + '0');
	}
	else if (n < 0 && n > INT_MIN)
	{
		ld = (n / -1) % 10;
		_putchar(ld + '0');
	}
	else if (n == INT_MIN)
	{
		n = (n / -1) / 10;
		ld = n % 10;

	return (ld);
}
