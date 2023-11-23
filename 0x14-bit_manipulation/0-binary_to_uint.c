#include "main.h"

/**
 * binary_to_uint - Converts binary to decimal
 * @b: String whose characters should be converted
 *
 * Return: Decimal number(base 10), 0 othewise
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, i = 0, num = 0;

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
		num += (calc_pow(2, i) * (b[len - 1] - 48));
		len--;
		i++;
	}

	return ((unsigned int) num);
}

/**
 * calc_pow - Computes power problems
 * @base: Base number
 * @power: Index/power
 *
 * Return: Computed value
 */
int calc_pow(int base, int power)
{
	if (power == 0)
		return (1);
	else
		return (base * calc_pow(base, power - 1));
}
