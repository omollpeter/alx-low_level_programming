#include "main.h"

/**
 * main - Prints minimum number of coins to make change
 * @argc: Number of arguments passed
 * @argv: Arguments passed
 *
 * Return: 0 if one argument is passed, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int coins = 0;
	int total;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);

	if (total <= 0)
		coins = 0;
	if (total >= 25)
	{
		coins += total / 25;
		total = total % 25;
	}
	if (total >= 10 && total < 25)
	{
		coins += total / 10;
		total = total % 10;
	}
	if (total >= 5 && total < 10)
	{
		coins += total / 5;
		total = total % 5;
	}
	if (total >= 2 && total < 5)
	{
		coins += total / 2;
		total = total % 2;
	}
	if (total >= 1 && total < 2)
	{
		coins += total / 1;
		total = total % 1;
	}
	printf("%d\n", coins);
	return (0);
}
