#include "variadic_functions.h"

/**
 * print_numbers - Prints integers separated with the provided separator
 * @separator: Delimiter between the printed integers
 * @n: The number of integers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num;

		num = va_arg(args, int);
		printf("%d", num);

		if (i == n - 1)
		{
			continue;
		}
		if (!separator)
			continue;
		printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
