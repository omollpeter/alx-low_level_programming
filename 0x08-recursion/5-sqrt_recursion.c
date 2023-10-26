#include "main.h"

/**
 * _sqrt_recursion - Use a recursive func to compute square root of an integer
 * @n: Integer whose square root is calculated
 *
 * Return: square root of n if n is perfect square, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	int i = 0;
	int sq_root = sq_rt(n, i);

	return (sq_root);
}

/**
 * sq_rt - Computes the square root of an integer recursively
 * @n: Integer whose square root is calculated
 * @i: Possible values of square root if n is a perfect square
 *
 * Return: i if n is a perfect square, -1 otherwise
 */
int sq_rt(int n, int i)
{
	if (n < 0)
		return (-1);
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (sq_rt(n, i + 1));
	return (i);
}
