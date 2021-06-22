#include <stdio.h>

/**
 * _isalpha - checks if c is a letter or not
 * @c: character to be tested
 *
 * Return: 1 if c is letter. 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	} else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
