#include "main.h"

/**
 * main - Prints command line arguments one per line
 * @argc: Number of arguments passed
 * @argv: Arguments passed
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	(void) argc;
	(void) argv;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
