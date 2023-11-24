#include "main.h"

/**
 * flip_bits - Counts the number of bits that needs to be flipped for n to eq m
 * @n: First number
 * @m: Second number
 *
 * Return: void
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, result;

	result = n ^ m;

	for (; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
