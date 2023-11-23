#include "main.h"

/**
 * get_endianness - Checks whether byte order is little or big endian
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;

	if (*((char *)&i) == 1)
		return (1);
	else
		return (0);
}
