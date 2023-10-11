#include "main.h"

/**
 * print_times_table - prints the times table for different levels
 * @n: Integer that denotes level of times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int x;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			x = i * j;

			if (x < 10)
			{
				if (j > 0)
					printf(",   %d", x);
				else
					printf("%d", x);
			}
			else if (x >= 10 && x < 100)
				printf("  %d", x);
			else if (x >= 100)
				printf(" %d", x);
		}
		printf("\n");
	}
}
