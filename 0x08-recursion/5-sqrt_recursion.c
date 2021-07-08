#include "holberton.h"

void primeFactor(int, int *, int, int);
int natSquare(int *);

/**
 * _sqrt_recursion - Function finds natural square root
 * of a number recursively
 * @n: Number to be examined
 *
 * Return: Natural square root of @n
 */
int _sqrt_recursion(int n)
{
	int arr[30] = { 0 };
	int sqrt;

	primeFactor(n, &arr[0], 2, 0);

	sqrt = natSquare(&arr[0]);

	if (n == 1)
		return (1);

	return ((sqrt * sqrt == n) ? sqrt : -1);
}

/**
 * primeFactor - Function prime factorizes numbers
 * @n: Number to be prime factored
 * @count: Number to be a divisor of @n at each recursive call
 * @arr: Pointer to an array that stores the factors
 * @idx: Number taking care of index increment of @arr
 *
 * Return: void
 */
void primeFactor(int n, int *arr, int count, int idx)
{
	if (n <= count)
	{
		*(arr + idx) = count;
		return;
	}
	if (n % count == 0)
	{
		*(arr + idx) = count;
		primeFactor(n / count, arr, count, idx + 1);
	} else
		primeFactor(n, arr, count + 1, idx);
}

/**
 * natSquare - Function returns the multiple of odd-indexed
 * elements inside passed array
 * @arr: The array to be unique-extracted
 *
 * Return: Multiple of odd-indexed elements
 */
int natSquare(int *arr)
{
	if (*arr)
		return (*arr * natSquare(arr + 2));
	else
		return (1);
}
