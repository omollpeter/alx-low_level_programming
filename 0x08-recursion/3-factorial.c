#include "main.h"

/**
 * factorial - Calculates factorial of a number
 * @n: Number whose factorial is calculated
 *
 * Return: factorial if n > 0, 1 if n == 0 and -1 if
 * n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
