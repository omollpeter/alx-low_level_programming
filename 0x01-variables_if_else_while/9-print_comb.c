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

	i = 58;

	for (n = 48; n < i; n++)
	{
		putchar(n);
		if (n == 57)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
