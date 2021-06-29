#include "holberton.h"

/**
 * print_array - Function n elements of array of integers
 * @a: pointer to array
 * @n: number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", *(a + i));
		}
		printf("%d\n", *(a + i));
	} else
	{
		printf("\n");
	}
}
