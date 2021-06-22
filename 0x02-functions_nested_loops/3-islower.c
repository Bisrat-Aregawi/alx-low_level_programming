#include <stdio.h>

/**
 * _islower - Checks for lowercase
 * @c: character to be checked
 * Return: 1 if character is uppercase. 0 otherwise
 */
int _islower(int c)
{
	if (c >= 65 && c <= 99)
	{
		return (0);
	}
	return (1);
}
