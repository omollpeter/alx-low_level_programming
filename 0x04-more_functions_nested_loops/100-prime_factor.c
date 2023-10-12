#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	long int max;

	max = max_prime(612852475143);
	printf("%ld\n", max);

	return (0);
}

/**
 * max_prime - Finds and returns largest prime factor of a number
 * @n: Number whose prime factors are computed
 *
 * Return: Largest prime factor
 */
long int max_prime(long int n)
{
	long int prime = 2;
	long int result;

	for (; prime <= n; prime++)
	{
		if (n % prime != 0)
			continue;
		else if (n % prime == 0)
		{
			result = n / prime;

			if (result > 1)
				prime = max_prime(result);
			prime = prime;
			break;
		}
	}

	return (prime);
}
