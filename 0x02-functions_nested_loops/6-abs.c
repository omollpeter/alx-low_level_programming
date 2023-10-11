#include "main.h"

/**
 * _abs - Calculates the absolute value of an integer
 * @n: Integer whose absolute value is determined
 *
 * Return: Absolute value of n
 */
int _abs(int n)
{
	int abs;

	if (n > 0)
		abs = n;
	else if (n == 0)
		abs = 0;
	else if (n < 0)
		abs = n / -1;
	
	return (abs);
}
