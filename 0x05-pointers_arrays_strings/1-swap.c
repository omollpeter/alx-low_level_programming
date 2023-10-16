include "main.h"

/**
 * swap_int - Swaps values of two integers
 * @a: Pointer to first integer
 * @b: Pointer to second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;

	*a = j;
	*b = i;
}
