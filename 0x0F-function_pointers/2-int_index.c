#include "function_pointers.h"

/**
 * int_index - Function searches an array based on the logic of
 * passed function
 * @array: Array to be examined
 * @size: Size of @array
 * @cmp: Pointer to a function that holds the logic
 *
 * Return: First element's index that matches criteria
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size > 0 && array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
