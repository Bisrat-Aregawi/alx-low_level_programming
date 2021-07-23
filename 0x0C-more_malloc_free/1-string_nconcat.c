#include "holberton.h"
void concat(char *, char *, int);

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
	/*
	 * The expression "(s2len > n) ? n : s2len"
	 * is to check if the number of bytes to concatenate
	 * doesn't exceed the actual length of s2, if so we
	 * reset assign length of s2 instead of n.
	 */

	unsigned int s1len, s2len;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1len = strlen(s1), s2len = strlen(s2);

	str = malloc(s1len + ((s2len > n) ? n : s2len) + 1);
	if (str == NULL)
		return (NULL);

	concat(str, s1, s1len);
	concat(str + s1len, s2, ((s2len > n) ? n : s2len));

	*(str + s1len + ((s2len > n) ? n : s2len)) = '\0';
	return (str);
}

/**
 * concat - Function concatenates string sent to it
 * @s: String to copy from
 * @str: String to copy on to
 * @n: Position of str to begin copying on to
 *
 * Return: void
 */
void concat(char *str, char *s, int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(str + i) = *(s + i);
}
