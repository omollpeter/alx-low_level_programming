#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;
	long int sum = 0;

	while (fibonacci(i) < 4000000)
	{
		if (fibonacci(i) % 2 == 0)
			sum += fibonacci(i);
		i++;
	}
	printf("%ld\n", sum);

	return (0);
}

/**
 * fibonacci - Prints fibonacci number specified
 * @n: Integer specifying fibonacci position to print
 *
 * Return: Integer
 */
long int fibonacci(int n)
{
	long int f1 = 1;
	long int f2 = 2;
	long int next = f1 + f2;
	int i;
	long int fib;

	if (n == 1)
	{
		fib = f1;
	}
	else if (n == 2)
	{
		fib = f2;
	}
	else if (n > 2)
	{
		for (i = 3; i <= n; i++)
		{
			fib = next;

			f1 = f2;
			f2 = next;
			next = f1 + f2;
		}
	}

	return ((int) fib);
}
