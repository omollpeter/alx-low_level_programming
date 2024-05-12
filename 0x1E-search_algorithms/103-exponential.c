#include "search_algos.h"

/**
 * bin_search - Searches for value in a sorted array of int using bin search
 * @array: Pointer to array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 * @left: Left index
 * @right: Right index
 *
 * Return: Index where value is located, -1 otherwise
 */
int bin_search(int *array, size_t size, int value, int left, int right)
{
	int mid, i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i == right)
			printf("\n");
		else
			printf(", ");
	}

	mid = (left + right) / 2;

	if ((mid == left || mid == right) && array[mid] != value)
	{
		printf("Searching in array: %d\n", array[size - 1]);
		return (-1);
	}

	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
		return (bin_search(array, size, value, mid + 1, right));
	return (bin_search(array, size, value, left, mid));
}


/**
 * exponential_search - Searches for value in a sorted array using expon search
 * @array: Pointer to array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	int left, right;

	if (!array)
		return (-1);

	left = 0;
	right = 1;

	while (left < (int) size)
	{
		if (right > (int) size - 1)
		{
			printf("Value found between indexes [%d] and [%d]\n", left,
				(int) size - 1);
			return (bin_search(array, size, value, left, (int) size - 1));
		}
		else if (array[right] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", left, right);

			return (bin_search(array, size, value, left, min(right, (int) size
			- 1)));
		}

		printf("Value checked array[%d] = [%d]\n", right, array[right]);

		left = right;
		right *= 2;
	}
	return (-1);
}

/**
 * min - Returns minimum between two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Smallest integer
 */
int min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}
