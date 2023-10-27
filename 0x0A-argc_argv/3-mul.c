#include "main.h"

/**
 * main - Prints product of two arguments
 * @argc: Number of arguments passed
 * @argv: Arguments passed
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	(void) argc;
	(void) argv;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
