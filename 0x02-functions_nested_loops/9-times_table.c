#include "main.h"

/**
 * times_table - prints the times table
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = i * j;

			if (x < 10)
			{
				_putchar(x % 10 + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (x >= 10)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
