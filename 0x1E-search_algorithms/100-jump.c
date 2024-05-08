#include "search_algos.h"

/**
 * jump_search - Searches for a value using jump search algorithm
 * @array: Pointer to array to be searched
 * @size: Number of elements in the array
 * @value: Value to be searched for
 *
 * Return: first index where value is stored, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	int first, last, step, i;

	if (!array)
		return (-1);

	first = 0;
	last = (int) size - 1;
	step = (int) sqrt((double) size);

	while (first <= last)
	{
		printf("Value checked array[%d] = [%d]\n", first, array[first]);

		if (array[first + step] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", first, first +
			step);

			for (i = first; i <= first + step; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}

		first = first + step;
	}

	first = first - step;
	printf("Value found between indexes [%d] and [%d]\n", first, first + step);

	for (i = first; i <= last; i++)
		printf("Value checked array[%d] = [%d]\n", first, array[first]);

	return (-1);
}
