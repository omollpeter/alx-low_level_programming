#include "main.h"

/**
 * main - Prints the product of two command line arguments
 * @argc: Argument count
 * @argv: Program parameters
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	check_nondigit(argc, argv);
	run_bc(argv[1], argv[2]);

	return (0);
}

/**
 * check_nondigit - Checks if second and third args have letters in them
 * @argc: Arguments count
 * @argv: Program parameters
 *
 * Return: void
 */
void check_nondigit(int argc, char *argv[])
{
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
}

/**
 * run_bc - Runs bc calculator subprocess and multiplies s1 and s2
 * @s1: String containing integers
 * @s2: String containing integers
 *
 * Return: void
 */
void run_bc(char *s1, char *s2)
{
	FILE *fprocess;
	char *buffer;
	unsigned int buffer_size, len1, len2;

	len1 = strlen(s1);
	len2 = strlen(s2);
	buffer_size = len1 + len2 + 7;

	buffer = malloc(buffer_size);
	if (!buffer)
	{
		printf("Memory allocation failed\n");
		exit(98);
	}

	fprocess = popen("bc", "w");
	if (fprocess == NULL)
	{
		perror("bc failed to start\n");
		exit(98);
	}

	fprintf(fprocess, "%s * %s\n", s1, s2);
	fflush(fprocess);

	while (fgets(buffer, buffer_size, fprocess) != NULL)
		printf("%s\n", buffer);

	free(buffer);
	pclose(fprocess);
}
