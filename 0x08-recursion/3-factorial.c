#include "holberton.h"

/**
 * factorial - Function returns factorial of a given number
 * @n: Number to be spread
 *
 * Return: Factorial of @n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
