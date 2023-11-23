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
	char bits[33];

	if (n == 0)
	{
		bits[i] = 0;
	}
	else
	{
		while (n > 0)
		{
			bits[i] = n % 2 + '0';
			n /= 2;
			i++;
		}
		bits[i] = '\0';
	}
	if (index > i - 1)
		return (-1);
	return (bits[index] - '0');
}
