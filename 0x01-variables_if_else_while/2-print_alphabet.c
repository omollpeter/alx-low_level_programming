#include <stdio.h>

/**
 * main - Entry point
 *
 * Program prints all lowercase alphabet characters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	c = 'a';
	i = 123;

	while (c < i)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
