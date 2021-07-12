#include "holberton.h"

/**
 * _strdup - Function copies string passed to heap
 * @str: String to be copied
 *
 * Return: Pointer to the copy
 */
char *_strdup(char *str)
{
	int i, strLength;
	char *strCpy;

	i = 0;

	if (str)
	{
		strLength = strlen(str);
		strCpy = malloc(sizeof(char) * strLength + 1);
		if (strCpy)
		{
			while (i < strLength)
			{
				*(strCpy + i) = *(str + i);
				i++;
			}
			strCpy[strLength] = '\0';
		} else
			return (NULL);
	} else
		return (NULL);
	return (strCpy);
}
