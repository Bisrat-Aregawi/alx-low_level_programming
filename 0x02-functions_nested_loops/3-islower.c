#include <stdio.h>

/**
 * _islower - Checks for lowercase
 * @c: character to be checked
 * Return: 1 if character is uppercase. 0 otherwise
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	return (1);
}
