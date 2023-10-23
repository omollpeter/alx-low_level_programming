#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of sq. matrix of int
 * @a: Square matrix
 * @size: Number of rows/columns
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int *p = &a[0];
	int i;
	int main_diag = 0;
	int other_diag = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
			main_diag += *(p + i);
		if (i > 0 && i % (size - 1) == 0 && i < (size * size - 1))
			other_diag += *(p + i);
	}

	printf("%d, %d\n", main_diag, other_diag);
}
