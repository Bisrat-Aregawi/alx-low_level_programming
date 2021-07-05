#include "holberton.h"

/**
 * _strspn - Function returns initial portion of @s which
 * consisits of only the characters that are part of @accept
 * @s: String to be scanned
 * @accept: String containing the characters to match
 *
 * Return: Length of the initial portion of @s containing @accept chars
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, length, exist;

	length = 0;
	while (*s)
	{
		i = 0, exist = 0;
		while (*(accept + i))
		{
			if (*(accept + i) == *s)
			{
				exist = 1;
				length++;
				break;
			}
			i++;
		}
		if (exist == 0)
			break;
		s++;
	}

	return (length);
}
