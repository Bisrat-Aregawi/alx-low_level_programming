#include "search_algos.h"

/**
 * binary_search - Function searches a value using binary search algorithm
 * @array: Pointer to array to search @value in
 * @size: Size of the array
 * @value: Value to search in @array
 *
 * Return: Index @value is found in, -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, m, r = size - 1;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		print_array(array, l, r);
		m = (l + r) / 2;

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else if (array[m] == value)
			return (m);
	}
	return (-1);
}

/**
 * print_array - Function prints content of @arr
 * @arr: Array to print to stdout
 * @begin: Begining index to print
 * @end: Ending index to stop printing
 *
 * Return: void
 */
void print_array(int *arr, int begin, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = begin; i < end; i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[i]);
}
