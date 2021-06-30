#include "holberton.h"

/**
 * _strncpy - Function copies string from source to destination
 * @src: String to be copied
 * @dest: String to be copied on
 * @n: Number of @src chars to copy
 *
 * Return: Pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, srcLength, destLength;

	i = 0, srcLength = 0, destLength = 0;

	while (*(src + i))
	{
		srcLength++;
		i++;
	}
	i = 0;
	while (*(dest + i))
	{
		destLength++;
		i++;
	}
	if (n < srcLength)
	{
		for (i = 0; i < n; i++)
			*(dest + i) = *(src + i);
	} else
	{
		for (i = 0; i < n; i++)
			*(dest + i) = '\0';
		for (i = 0; i < srcLength; i++)
			*(dest + i) = *(src + i);
	}

	return (dest);
}
