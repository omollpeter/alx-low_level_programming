#include "search_algos.h"

/**
 * binary_search - Searches for value in a sorted array of int using bin search
 * @array: Pointer to array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int first, mid, last, i;

	if (!array)
		return (-1);

	first = 0;
	last = (int) size - 1;

	while (first <= last)
	{
		printf("Searching in array: ");
		for (i = first; i <= last; i++)
		{
			printf("%d", array[i]);
			if (i == last)
				printf("\n");
			else
				printf(", ");
		}
		mid = (first + last) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			last = mid - 1;
		else
			first = mid + 1;
	}
	return (-1);
}
