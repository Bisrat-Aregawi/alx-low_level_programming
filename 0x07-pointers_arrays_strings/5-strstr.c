#include "holberton.h"

int length(char *);

/**
 * _strstr - Function locates substring
 * @haystack: String to be scanned
 * @needle: String containing sequence of characters to match
 *
 * Return: Pointer to the first occurence in @haystack of all @needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *p;

	i = 0, p = NULL;
	while (*haystack)
	{
		while (*(needle + i))
		{
			if (*(needle + i) == *haystack)
			{
				if (p == NULL)
					p = haystack;
				i++;
			} else
				p = NULL;
			break;
		}
		if (!length(needle))
			return (haystack);
		if (i == length(needle))
			return (p);
		if (p == NULL)
			i = 0;
		haystack++;
	}
	return (p);
}

/**
 * length - Function returns length of string passed
 * @str: String to examine
 *
 * Return: Length of string
 */
int length(char *str)
{
	int length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}
