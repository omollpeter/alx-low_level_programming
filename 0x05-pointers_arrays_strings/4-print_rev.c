#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int len = 0;
	
	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}

	for (i = len; *(s + i) != '\0'; i--)
	{
		printf("%c", *(s + i));
	}
	putchar('\n');
}
