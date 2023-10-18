#include "main.h"

/**
 * reverse_array - Reverses array of integers
 * @a: Array to reverse
 * @n: Number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = n; i > n / 2; i--)
	{
		temp = a[i - 1];
		a[i - 1] = a[n - i];
		a[n - i] = temp;
	}
}
