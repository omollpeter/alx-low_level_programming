#include "variadic_functions.h"

/**
 * sum_them_all - Sums all integers provided in the arguments
 * @n: Number of integers required
 *
 * Return: Sum of the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;

	va_list args;

	va_start(args, n);

	while (i++ < n)
	{
		int num;

		num = va_arg(args, int);
		sum += num;
	}

	va_end(args);
	return (sum);
}
