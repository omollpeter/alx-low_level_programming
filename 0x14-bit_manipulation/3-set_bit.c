#include "main.h"

/**
 * set_bit - Sets specific bit at the given index in the binary rep.
 * @n: pointer to the decimal number(base-10)
 * @index: Position of the bit to set in the binary
 *
 * Return: value of th bit, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
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

	while (*n > 0)
	{
		bits[i] = *n % 2 + '0';
		*n /= 2;
		i++;
	}
	bits[index] = '0' + 1;
	*n = binary_to_uintl(bits);
	return (1);
}

/**
 * binary_to_uintl - Converts binary to decimal
 * @b: String whose characters should be converted
 *
 * Return: Decimal number(base 10), 0 othewise
 */
unsigned long int binary_to_uintl(const char *b)
{
	unsigned long i = 0, num = 0;
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] == 49 || b[i] == 48)
		{
			len++;
			i++;
		}
		else
			return (0);
	}

	i = 0;
	while (len > 0)
	{
		num += (calc_power(2, i) * (b[i] - 48));
		len--;
		i++;
	}

	return ((unsigned long int) num);
}

/**
 * calc_power - Computes power problems
 * @base: Base number
 * @power: Index/power
 *
 * Return: Computed value
 */
unsigned long calc_power(unsigned long base, unsigned long power)
{
	if (power == 0)
		return (1);
	else
		return (base * calc_power(base, power - 1));
}
