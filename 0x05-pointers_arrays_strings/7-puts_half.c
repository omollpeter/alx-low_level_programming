#include "main.h"

/**
 * puts_half - Prints second half of a string
 * @str: String to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int n;
	int len = 0;

	for (i = 0; *(str + i) != '\0'; i++)
		len += 1;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len / 2) + 1;

	for (i = n; i <= len; i++)
		printf("%c", str[i]);
	putchar('\n');
}
