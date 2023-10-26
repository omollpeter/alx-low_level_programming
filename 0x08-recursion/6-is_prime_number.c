#include "main.h"

/**
 * is_prime_number - Confirms if an integer is prime number or not
 * @n: Integer to confirm
 *
 * Return: 1 if n is prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int i = 2;
	bool is_prime = check_prime(n, i);

	if (is_prime)
		return (1);
	else
		return (0);
}

/**
 * check_prime - Checks whether an integer is prime number or not
 * @n: Integer to check
 * @i: Divisor
 *
 * Return: true if n is a prime number, false otherwise
 */
bool check_prime(int n, int i)
{
	if (n < 2)
		return (false);
	if (n == i)
		return (true);
	if (n % i == 0)
		return (false);
	if (n > i)
		return (check_prime(n, i + 1));
	return (true);
}
