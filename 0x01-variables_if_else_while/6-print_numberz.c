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
	int digit;
	int i;

	digit = 48;
	i = 58;

	while (digit < i)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
