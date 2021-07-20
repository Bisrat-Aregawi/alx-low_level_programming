#include "function_pointers.h"

/**
 * array_iterator - Function executes given function on each element
 * of given array
 * @array: Array to iterate on
 * @size: Size of @array
 * @action: Pointer to a function
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (array && action)
	{
		while (i < size)
		{
			action(*(array + i));
			i++;
		}
	}
}
