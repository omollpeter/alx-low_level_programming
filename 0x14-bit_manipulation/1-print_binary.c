#include "main.h"

/**
 * print_binary - Prints binary representation of a decimal number
 * @n: Decimal number(base-10)
 *
 * Return: void
 */
void print_binary(unsigned long n)
{
	long i = 0;
	char *bits, *zeros = "00000000000000000000000000000000";

	bits = malloc(sizeof(char) * 65);
	if (!bits)
	{
		return;
	}

	strcpy(bits, zeros);
	strcat(bits, zeros);

	for (; n > 0; i++)
	{
		bits[i] = (n & 1) + '0';
		n = n >> 1;
	}
	if (i > 0)
		i--;
	for (; i >= 0; i--)
		putchar(bits[i]);
}
