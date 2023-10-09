#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Print string to stderr
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	char *buff = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, buff, strlen(buff));
	exit(1);
}
