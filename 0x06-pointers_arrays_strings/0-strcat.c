#include "holberton.h"

/**
 * _strcat - Function concatenates two strings
 * @src: String to concatenate
 * @dest: String to concatente to
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, srcLength, destLength;

	i = 0, destLength = 0, srcLength = 0;

	while (*(dest + i))
	{
		destLength++;
		i++;
	}
	i = 0;
	while (*(src + i))
	{
		srcLength++;
		i++;
	}
	for (i = 0; i < srcLength; i++)
	{
		*(dest + destLength + i) = *(src + i);
	}
	return (dest);
}
