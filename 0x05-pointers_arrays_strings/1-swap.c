#include "holberton.h"

/**
 * swap_int - Function that swaps values of two integers
 * @a: first integer pointer
 * @b: second integer pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
