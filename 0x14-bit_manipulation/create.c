#include "main.h"

/**
 * create_bin - Create string that is a binary representation
 * @n: Decimal number whose binary is created
 *
 * Return: pointer to the string rep, NULL otherwise
 */
char *create_bin(unsigned long int n)
{
	unsigned long num;
	long i = 0;
	char *bits, *zeros = "00000000000000000000000000000000";

	bits = malloc(sizeof(char) * 33);
	if (!bits)
		return (NULL);

	strcpy(bits, zeros);
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
			bits[i] = 1 + '0';
			n -= calc_power(2, (unsigned long) i);
		}
		else
			bits[i] = 0 + '0';
		i--;
	}
	return (bits);
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
