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
	int n;
	int i;

	n = 48;

	while (n < 58)
	{
		for (i = 48; i < 58; i++)
		{
			putchar(n);
			putchar(i);
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
