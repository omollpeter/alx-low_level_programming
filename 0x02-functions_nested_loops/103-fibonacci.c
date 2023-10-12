#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;
	int sum = 0;

	while (1)
	{
		if (fibonacci(i) > 4000000)
			break;
		sum += fibonacci(i);
		i++;
	}
	printf("%d\n", sum);
	printf("%d\n", fibonacci(1));

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
	int f1 = 1;
	int f2 = 2;
	int next = f1 + f2;
	int i;
	int fib;

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

	return (fib);
}
