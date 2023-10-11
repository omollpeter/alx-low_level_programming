#include "main.h"

/**
 * print_times_table - prints the times table for different levels
 * @n: Integer that denotes level of times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			int x = i * j;

			if (x < 10)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(x % 10 + '0');
				}
				else
					_putchar(x % 10 + '0');
			}
			else if (x >= 10 && x < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else if (x >= 100)
			{
				putchar(',');
				putchar(' ');
				putchar(x / 100 + '0');
				putchar((x % 100) / 10 + '0');
				putchar(x % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
