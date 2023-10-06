#include <stdio.h>

/**
 * main - Entry point
 *
 * Program prints all digits with a comma followed by space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i;
	int j;

	n = 48;

	while (n < 58)
	{
		for (i = 49; i < 58; i++)
		{
			if (n >= i)
				continue;
			for (j = 50; j < 58; j++)
			{
				if (i >= j)
					continue;
				putchar(n);
				putchar(i);
				putchar(j);
				if (n == 55 && i == 56 && j == 57)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	}
	putchar('\n');
	return (0);
}
