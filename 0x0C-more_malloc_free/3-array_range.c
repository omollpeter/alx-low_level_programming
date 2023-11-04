#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: Value to be allocated to the first element
 * @max: Value to be allocated to the last element
 *
 * Return: Pointer to the created array, NULL otherwise
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int start_value = min;

	if (min > max)
		return (NULL);

	arr = malloc(((max - min) + 1) * sizeof(int));
	if (!arr)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		*(arr + i) = start_value;
		start_value++;
	}

	return (arr);
}
