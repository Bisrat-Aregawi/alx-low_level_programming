#include "holberton.h"

/**
 * string_nconcat - Function concatenates strings upto certain length
 * @s1: String to concatenate to
 * @s2: String to concatenate on @s1
 * @n: Bytes count of @s2 to concatenate on @s1
 *
 * Return: Pointer to Concatenated string. NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, totlen;
	char *str;

	i = 0, j = 0;

	totlen = (n >= strlen(s2)) ? strlen(s1) + strlen(s2) : strlen(s1) + n;

	str = malloc(sizeof(char) * totlen + 1);
	if (str == NULL)
		return (NULL);

	while (i < totlen)
	{
		if (*(s1 + i))
			*(str + i) = *(s1 + i);
		else
			break;
		i++;
	}
	while (i < totlen)
	{
		*(str + i) = *(s2 + j);
		i++;
		j++;
	}
	*(str + i) = '\0';

	return (str);
}
