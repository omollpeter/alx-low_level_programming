#include "main.h"

/**
 * _pow_recursion - Computes values of integers raised to power
 * @x: Number
 * @y: Power
 *
 * Return: value of x raised to the power of y or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
