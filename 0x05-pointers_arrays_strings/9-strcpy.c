#include "holberton.h"

/**
 * *_strcpy - Function copies string pointed by src to buffer pointed
 * to by dest including the null byte (\0).
 * @src: the source pointer
 * @dest: the destination pointer
 *
 * Return: The pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int i, length;

	i = 0;
	length = 0;

	while (*(src + i))
	{
		length++;
		i++;
	}
	for (i = 0; i <= length; i++)
	{
		*(dest + i) = *(src + i);
	}
	dest = src;
	return (dest);
}
