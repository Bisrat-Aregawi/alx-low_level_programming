#include "holberton.h"
void helpWitS1(char *, char*, int *);
void helpWitS2(char *, char*, int *);

/**
 * str_concat - Function that returns concatenate of
 * 2 strings from the heap
 * @s1: First string to concatenate on
 * @s2: Second string to concatenate to
 *
 * Return: Pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, strLength;
	char *concatStr;

	i = 0;
	if (s1 == NULL && s2 == NULL)
	{
		strLength = 1;
		concatStr = malloc(strLength);
		if (concatStr)
			*concatStr = '\0';
		else
			return (NULL);
	} else if (s1 != NULL && s2 == NULL)
	{
		strLength = strlen(s1);
		concatStr = malloc(strLength);
		if (concatStr)
			helpWitS1(concatStr, s1, &i);
		else
			return (NULL);
	} else if (s1 == NULL && s2 != NULL)
	{
		strLength = strlen(s2);
		concatStr = malloc(strLength);
		if (concatStr)
			helpWitS2(concatStr, s2, &i);
		else
			return (NULL);
	} else
	{
		strLength = strlen(s1) + strlen(s2) + 1;
		concatStr = malloc(strLength);
		if (concatStr)
		{
			helpWitS1(concatStr, s1, &i);
			helpWitS2(concatStr, s2, &i);
		} else
			return (NULL);
	}
	return (concatStr);
}

/**
 * helpWitS1 - Function helps str_concat with copying strings
 * from the second string argument passed to it
 * @concatStr: Pointer to string to be concatenated by 'str_concat'
 * @s1: Pointer to second string argument
 * @i: Position counter of 'concatStr'
 *
 * Return: void
 */
void helpWitS1(char *concatStr, char *s1, int *i)
{
	while (1)
	{
		if (*(s1 + *i))
		{
			*(concatStr + *i) = *(s1 + *i);
			*i = *i + 1;
		} else
			break;
	}
}

/**
 * helpWitS2 - Function helps str_concat with copying strings
 * from the second string argument passed to it
 * @concatStr: Pointer to string to be concatenated by 'str_concat'
 * @s2: Pointer to second string argument
 * @i: Position counter for 'concatStr'
 *
 * Return: void
 */
void helpWitS2(char *concatStr, char *s2, int *i)
{
	int j;

	j = 0;
	while (1)
	{
		if (*(s2 + j))
		{
			*(concatStr + *i) = *(s2 + j);
			j++;
			*i = *i + 1;
		} else
			break;
	}
}
