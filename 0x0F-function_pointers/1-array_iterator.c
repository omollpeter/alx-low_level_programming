#include "function_pointers.h"

/**
 * array_iterator - Prints elements of an array line by line
 * @array: Integer array whose elements are to be printed
 * @size: The number of elements in the array
 * @action: pointer to a function that enables different print formats
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
