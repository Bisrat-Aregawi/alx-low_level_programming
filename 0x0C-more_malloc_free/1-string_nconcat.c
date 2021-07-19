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
	int nullnessRes = nullnessChk(s1, s2);

	i = 0, j = 0;

	if (s1 == NULL && s2 != NULL)
	{
		if (n >= strlen(s2))
			totlen = strlen(s2);
		else
			totlen = n;

		str = malloc(sizeof(char) * totlen + 1);

		if (str == NULL)
			return (NULL);

		while (i < totlen)
		{
			if (*(s1 + i))
				*(str + i) = *(s2 + i);
			else
				break;
			i++;
		}
	} else if (s1 != NULL && s2 == NULL)
	{
		totlen = strlen(s1);

		str = malloc(sizeof(char) * totlen + 1);

		if (str == NULL)
			return (NULL);

		while (*s1)
		{
			*s1 = *str;
			s1++;
			str++;
		}
	} else if ( s1 != NULL && s2 != NULL)
	{
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

	} else
		return (NULL);
	*(str + i) = '\0';

	return (str);
}

int nullnessChk (char *s1, char *s2)
{
	if (s1 == NULL && s2 != NULL)
		return (1);
	else if (s1 != NULL && s2 == NULL)
		return (2);
	else if (s1 == NULL && s2 == NULL)
		return (0);
	return (3);
}

void concatenator (char *s, char *str)
{
	while (1)
	{
		if (*s)
			*(str) = *s;
		else
			break;
		str++;
		s++;
	}
}
