#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * @array: Pointer to array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index of values location, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);
	for (i = 0; i < (int) size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
