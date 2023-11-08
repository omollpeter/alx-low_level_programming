#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcode of a code
 * @argc: No of programm parameters
 * @argv: Program parameters
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		exit(1);
	}

	num1 = atoi(argv[1]);
	if (num1 < 0)
	{
		printf("Errow\n");
		exit(2);
	}
	return (0);
}
