#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @str: String to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		printf("%c", *(str + i));
	}
	putchar('\n');
}
