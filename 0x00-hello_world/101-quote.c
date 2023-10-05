#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Print string to stderr
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(msg, 1, sizeof(msg), stderr);
	exit(1);
}
