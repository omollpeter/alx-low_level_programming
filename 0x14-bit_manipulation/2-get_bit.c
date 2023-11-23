#include "main.h"

/**
 * get_bit - Retrieves specific bit at the given index in the binary rep.
 * @n: Decimal number(base-10)
 * @index: Position of the bit in the binary
 *
 * Return: value of the bit, -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	char *bits;
	char *zeros = "00000000000000000000000000000000";

	bits = malloc(sizeof(char) * 33);
	if (!bits)
		return (-1);

	strcpy(bits, zeros);
	if (index > 32)
		return (-1);

	while (n > 0)
	{
		bits[i] = n % 2 + '0';
		n /= 2;
		i++;
	}
	return (bits[index] - '0');
}
