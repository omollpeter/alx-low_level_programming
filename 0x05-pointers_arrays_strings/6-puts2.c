#include "main.h"

/**
 * puts2 - Prints characters in even position
 * @str: String to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			printf("%c", str[i]);
		}
	}
	putchar('\n');
}
