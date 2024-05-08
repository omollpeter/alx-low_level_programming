#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array (interpola)
 * @array: Pointer to array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	int first, last, mid;

	if (!array)
		return (-1);

	first = 0;
	last = (int) size - 1;

	while (1)
	{
		mid = first + (((double)(last - first) / (array[last] - array[first]))
* (value - array[first]));

		if (mid > last)
		{
			printf("Value checked array[%d] is out of range\n", mid);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			first = mid + 1;
	}
	return (-1);
}
