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

	n = 48;

	while (n < 58)
	{
		for (i = 49; i < 58; i++)
		{
			if (n >= i)
				continue;
			putchar(n);
			putchar(i);
			if (n == 56 && i == 57)
				continue;
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
