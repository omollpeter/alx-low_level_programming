#include <stdio.h>

/**
 * main - FizzBuzz Test
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			if (i == 100)
				continue;
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			if (i == 100)
				continue;
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i == 100)
				continue;
			printf(" ");
		}
		else
		{
			printf("%d", i);
			if (i == 100)
				continue;
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
