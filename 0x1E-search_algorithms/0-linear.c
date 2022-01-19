#include "search_algos.h"

/**
 * linear_search - Function searches a value using linear search algorithm
 * @array: Pointer to array to search @value in
 * @size: Size of the array
 * @value: Value to search in @array
 *
 * Return: Index @value is found in, -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
			return ((int)i);
	}
	return (-1);
}
