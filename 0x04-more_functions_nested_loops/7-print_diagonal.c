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
			for(j = 0; j < n; j++)
			{
				_putchar(48);
			}
			_putchar()
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
