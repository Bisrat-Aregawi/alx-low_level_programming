#include "holberton.h"

/**
 * string_toupper - Function that performs UPPERCASE
 * @str: String to be manipulated
 *
 * Return: Pointer to @str
 */
char *string_toupper(char *str)
{
	int i, length;

	i = 0, length = 0;

	while (*(str + i))
	{
		length++;
		i++;
	}
	for (i = 0; i < length; i++)
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) -= 32;
		}
	}
	return (str);
}

