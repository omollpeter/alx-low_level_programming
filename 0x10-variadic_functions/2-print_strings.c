#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated with the provided separator
 * @separator: Delimiter between the printed integers
 * @n: The number of strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (!separator)
	{
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str;

		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i == n - 1)
		{
			continue;
		}
		printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
