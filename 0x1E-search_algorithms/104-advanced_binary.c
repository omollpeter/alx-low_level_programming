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
	{
		if (array[mid - 1] == value)
			return (bin_search(array, size, value, left, mid));
		return (mid);
	}

	if (array[mid] < value)
		return (bin_search(array, size, value, mid + 1, right));
	return (bin_search(array, size, value, left, mid));
}

/**
 * advanced_binary - Searches for a value in a sorted array
 * @array: Pointer to array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	int left, right;

	if (!array)
		return (-1);

	left = 0;
	right = (int) size - 1;

	return (bin_search(array, size, value, left, right));
}
