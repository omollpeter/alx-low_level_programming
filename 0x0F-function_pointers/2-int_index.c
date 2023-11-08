#include "function_pointers.h"

/**
 * int_index - Searches for an integer in the array
 * @array: Integer array
 * @size: Number of elements in the integer array
 * @cmp: Pointer to a function whose evaluation confirms the wanted integer
 *
 * Return: index of the required integer in the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result)
		{
			return (i);
		}
	}

	return (-1);
}
