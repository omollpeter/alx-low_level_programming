#include "main.h"

/**
 * print_triangle - Prints triangle using space and #
 * @size: Number of # to use
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = i; j > 0; j--)
			{
				_putchar(' ');
			}

			for (k = i; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
