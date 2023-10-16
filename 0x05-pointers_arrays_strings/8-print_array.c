#include "main.h"

/**
 * print_array - Prints elements of an array
 * @a:  Array
 * @n: No of elements in the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
