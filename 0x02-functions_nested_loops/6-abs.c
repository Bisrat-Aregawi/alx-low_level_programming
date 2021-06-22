#include "holberton.h"

/**
 * _abs - A function that returns absolute value
 * @n: number to be examined
 *
 * Return: number if positive. -number if otherwise
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	return (n);
}
