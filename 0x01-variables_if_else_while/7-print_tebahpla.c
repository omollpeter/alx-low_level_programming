#include <stdio.h>

/**
 * main - Entry point
 *
 * Program prints all single digits using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	c = 'z';
	i = 96;

	while (c > i)
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
