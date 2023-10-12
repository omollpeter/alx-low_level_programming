#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fibonacci_seq(98);

	return (0);
}

/**
 * fibonacci_seq - Prints fibonacci sequence for integer specified
 * @n: Integer specifying fibonacci position to print
 *
 * Return: void
 */
void fibonacci_seq(int n)
{
	long int f1 = 1;
	long int f2 = 2;
	long int next = f1 + f2;
	int i;

	if (n == 1)
	{
		printf("%ld\n", f1);
	}
	else if (n == 2)
	{
		printf("%ld, %ld\n", f1, f2);
	}
	else if (n > 2)
	{
		printf("%ld, %ld, ", f1, f2);
		for (i = 3; i <= n; ++i)
		{
			printf("%ld", next);

			f1 = f2;
			f2 = next;
			next = f1 + f2;

			if (i == n)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
