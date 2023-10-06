#include <stdio.h>

/**
 * main - Entry point
 *
 * Program prints lowercase alphabet characters but omit some
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	i = 123;

	for (c = 'a'; c < i; c++)
	{
		if (c == 101 || c == 113)
			continue;
		putchar(c);
	}
	putchar('\n');

	return (0);
}
