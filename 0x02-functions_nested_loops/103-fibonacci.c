#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 2;
	int sum = 0;

	while (fibonacci(i) < 4000000)
	{
		if (fibonacci(i) % 2 == 0)
			sum += fibonacci(i);
			i++;
	}
	printf("%d\n", sum);

	return (0);
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
