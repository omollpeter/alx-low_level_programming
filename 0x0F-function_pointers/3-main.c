#include "3-calc.h"

/**
 * main - Performs simple mathematical opeartions and prints result
 * @argc: Number of program parameters supplied
 * @argv: Program parameters
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;
	int (*ptrop)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptrop = get_op_func(argv[2]);
	if (ptrop == NULL || strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((ptrop == op_div || ptrop == op_mod) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = ptrop(num1, num2);
	printf("%d\n", result);

	return (0);
}
