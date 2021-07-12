#include "holberton.h"

/**
 * create_array - Function creates an array of characters,
 * and initializes it with a specific char.
 * @size: Size of array to be created
 * @c: Character to fill the array created
 *
 * Return: Pointer to the array created
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	str = (size == 0) ? NULL : malloc(size);
	if (str)
	{
		while (size--)
			*(str + size) = c;
	}

	return (str);
}
