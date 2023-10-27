#include "main.h"

/**
 * main - Prints sum of all arguments
 * @argc: Number of arguments passed
 * @argv: Arguments passed
 *
 * Return: 0 if all args are integers or if no arguments is passed
 * 1 if any argument is not an integer
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);

	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
