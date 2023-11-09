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
	int bytes, i;
	char *array_codes;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array_codes = (char *) main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", array_codes[i]);
			continue;
		}
		printf("%02hhx ", array_codes[i]);
	}
	return (0);
}
