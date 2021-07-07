#include <stdio.h>

/**
 * _pow_recursion - Function raises a number to a number
 * @x: Number to power
 * @y: Number to be power of @x
 *
 * Return: @x to the power of @y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	y--;
	x = x * _pow_recursion(x, y);
	return (x);
}
