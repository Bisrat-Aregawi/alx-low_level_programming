#include "holberton.h"

void primeFactorizer(int, int, int *, int);

/**
 * is_prime_number - Function determines primality of a number
 * @n: Number to be examined
 *
 * Return: 1 if @n is prime. 0 otherwise
 */
int is_prime_number(int n)
{
	int arr[30] = { 0 };

	primeFactorizer(n, 2, &arr[0], 0);

	if (n <= 1)
		return (0);
	else if (arr[1] == 0)
		return (1);
	return (0);
}

/**
 * primeFactorizer - Function prime-factorizes passed number
 * and populates an array with the divisors
 * @n: Number to be prime-factorized
 * @divisor: Divisor of @n
 * @arr: Array pointer to populate with prime factors
 * @idx: Index of @arr
 *
 * Return: void
 */
void primeFactorizer(int n, int divisor, int *arr, int idx)
{
	if (n <= divisor)
	{
		*(arr + idx) = divisor;
		return;
	}
	if (n % divisor == 0)
	{
		*(arr + idx) = divisor;
		primeFactorizer(n / divisor, divisor, arr, idx + 1);
	} else
		primeFactorizer(n, divisor + 1, arr, idx);
}
