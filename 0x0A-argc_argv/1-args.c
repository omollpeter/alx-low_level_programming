#include "main.h"

/**
 * main - Prints the number of command line arguments passed to it
 * @argc: Number of command line arguments
 * @argv: Command line arguments
 *
 * Return: 0 (Success)
 */
int main(int __attribute__((unused)) argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
