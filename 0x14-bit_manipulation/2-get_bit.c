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
	unsigned long num;
	unsigned int j = 0;
	int bits[32], i = 0;

	if (n == 0)
	{
		bits[j] = 0;
	}
	else
	{
		while (1)
		{
			num = calc_power(2, (unsigned long) i);
			if (num == n)
				break;
			if (num > n)
			{
				i = i - 1;
				break;
			}
			i++;
		}
		while (i >= 0)
		{
			if (calc_power(2, (unsigned long) i) <= n)
			{
				bits[j] = 1;
				n -= calc_power(2, (unsigned long) i);
			}
			else
				bits[j] = 0;
			i--;
			j++;
		}
	}

	j--;
	if (index > j)
		return (-1);
	return (bits[j - index]);
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
