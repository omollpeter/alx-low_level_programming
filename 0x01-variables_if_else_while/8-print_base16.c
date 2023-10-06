#include <stdio.h>

/**
 * main - Entry point
 *
 * Program prints all numbers of base 16 in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;
	char c;
	int i;

	digit = 48;
	c = 'a';

	while (digit < 58)
	{
		putchar(digit);
		digit++;
	}

	while (c < 103)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
