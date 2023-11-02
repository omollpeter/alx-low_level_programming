#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Amount of space in bytes to allocate
 *
 * Return: pointer to the allocated space
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit(98);

	return (p);
}
