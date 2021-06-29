#include "holberton.h"

/**
 * _strncat - Function concatenates n bytes from src to dest
 * @src: string to concatenate.
 * @dest: string to concatenate to.
 * @n: number of bytes to cut from @src and concatenate to @dest
 *
 * Return: Pointer to resulting @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, destLength, srcLength;

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
	if (n > srcLength)
		n = srcLength;
	for (i = 0; i < n; i++)
	{
		*(dest + destLength + i) = *(src + i);
	}
	return (dest);
}
