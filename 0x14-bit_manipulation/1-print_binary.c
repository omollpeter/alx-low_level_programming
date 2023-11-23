#include "main.h"

/**
 * print_binary - Prlongs binary representation of a decimal number
 * @n: Decimal number(base-10)
 *
 * Return: void
 */
void print_binary(unsigned long n)
{
	unsigned long num;
	long i = 0;

	if (n == 0)
	{
		_putchar(48);
		return;
	}

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
			_putchar(49);
			n -= calc_power(2, (unsigned long) i);
		}
		else
			_putchar(48);
		i--;
	}
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
