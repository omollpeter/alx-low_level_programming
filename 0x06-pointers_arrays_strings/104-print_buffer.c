#include "main.h"

/**
 * print_buffer - Prints hexadecimal characters of buffer
 * @b: Buffer to print
 * @size: size of buffer (sizeof)
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;
	int j = 0;
	int rem;

	for (i = 1; i <= size; i++)
	{
		if (i - 1 == 0)
			printf("%08x: ", i - 1);
		printf("%02x", b[i - 1]);
		if ((i - 1) % 2)
			printf(" ");
		if (i % 10 == 0)
		{
			while (j < size)
			{
				printf("%c", (b[j] >= 0 && b[j] < 32) ? '.' : b[j]);
				j++;
				if (j % 10 == 0)
					break;
			}
			printf("\n%08x: ", i);
		}
	}
	rem = size - j;
	if (rem % 2 == 0)
	{
		printf("%*s", 25 - ((rem / 2 * 4) + (rem / 2)), " ");
		for (; j < size; j++)
			printf("%c", (b[j] >= 0 && b[j] < 32) ? '.' : b[j]);
	}
	else
	{
		rem = rem / 2;
		printf("%*s", 25 - ((rem * 4) + rem + 2), " ");
		for (; j < size; j++)
			printf("%c", (b[j] >= 0 && b[j] < 32) ? '.' : b[j]);
	}
	putchar('\n');
}
