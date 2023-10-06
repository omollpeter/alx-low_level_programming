#include <stdio.h>

/**
 * main - Entry point
 *
 * Program prints all single digit numbers starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
