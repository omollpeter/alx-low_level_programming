#include <stdio.h>

/**
 * main - Entry point
 *
 * Program prints a conbination of four digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 0;

	for (; i < 100; i++)
	{
		for (j = i ; j < 100; j++)
		{
			if (j != i)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');

				if (i == 98 && j == 99)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
