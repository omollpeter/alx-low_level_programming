#include "main.h"

/**
 * print_diagonal - Prints diagonal line using backslash
 * @n: Number of backslash to use
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i >= 1)
			{
				for (j = i; j > 0; j--)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
