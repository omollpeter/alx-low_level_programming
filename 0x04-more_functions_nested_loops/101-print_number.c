#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	if (n >= 0)
	{
		if (n < 10)
			putchar(n % 10 + '0');
		else if (n >= 10 && n < 100)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
		}
		else if (n >= 100 && n < 1000)
		{
			putchar(n / 100 + '0');
			putchar((n % 100) / 10  + '0');
			putchar(n % 10 + '0');
		}
		else if (n >= 1000)
		{
			putchar(n / 1000 + '0');
			putchar((n % 1000) / 100 + '0');
			putchar((n % 100) / 10 + '0');
			putchar(n % 10 + '0');
		}
	}
	else if (n < 0)
	{
		putchar('-');
		putchar((n / -1) / 10 + '0');
		putchar(-(n % 10) + '0');
	}
}
