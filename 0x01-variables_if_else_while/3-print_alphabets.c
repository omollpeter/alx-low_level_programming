#include <stdio.h>

/**
 * main - Entry point
 *
 * Program prints all lowercase and uppercase alphabet characters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char C;
	int i;

	c = 'a';
	C = 'A';
	i = 123;

	while (c < i)
	{
		putchar(c);
		c++;
	}
	
	i = 91;
	while (C < 91)
	{
		putchar(C);
		C++;
	}
	putchar('\n');

	return (0);
}
