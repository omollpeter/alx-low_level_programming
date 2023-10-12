#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 2;

	for (; i < 7; i++)
	{
		printf("%d", fibonacci(i));
		if (i == 6)
			continue;
		printf(", ");
	}
	putchar('\n');
}

/**
 * fibonacci - Prints fibonacci number specified
 * @n: Integer specifying fibonacci position to print
 *
 * Return: Integer
 */
int fibonacci(int n)
{
	if (n < 2)
		return (n);
	else
		return (fibonacci(n - 1) + fibonacci(n - 2));
}
