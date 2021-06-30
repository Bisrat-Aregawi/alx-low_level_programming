#include "holberton.h"

/**
 * reverse_array - Function reverses contents of passed array
 * @a: Pointer to array
 * @n: Number of elements of @a
 *
 * Return: Pointer to reversed array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int tmp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
