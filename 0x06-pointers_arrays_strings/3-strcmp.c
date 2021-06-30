#include "holberton.h"

/**
 * _strcmp - Function compares two strings by their ascii values
 * @s1: First string to be comared to
 * @s2: Second string to be compared to
 *
 * Return: difference between ascii values
 */
int _strcmp(char *s1, char *s2)
{
	int i, s1Val, s2Val, length;

	i = 0, s1Val = 0, s2Val = 0;

	length = biggest(strLength(s1), strLength(s2));

	for (i = 0; i < length; i++)
	{
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
			break;
		else if (*(s1 + i) != '\0' && *(s2 + i) == '\0')
		{
			s1Val = *(s1 + i);
			break;
		}
		else if (*(s1 + i) == '\0' && *(s2 + i) != '\0')
		{
			s2Val = *(s2 + i);
			break;
		}
		else if (*(s1 + i) != *(s2 + i))
		{
			s1Val = *(s1 + i);
			s2Val = *(s2 + i);
			break;
		}
	}
	return (s1Val - s2Val);
}
/**
 * biggest - Function returns biggest of two numbers
 * @n1: First number
 * @n2: Second number
 *
 * Return: Largest of @n1 & @n2
 */
int biggest(int n1, int n2)
{
	if (n1 > n2)
		return (n1);
	else
		return (n2);
	return (n1);
}

/**
 * strLength - Function returns number of characteres in string
 * @str: String to be examined
 *
 * Return: Length of string
 */
int strLength(char *str)
{
	int i, length;

	i = 0, length = 0;

	while (*(str + i))
	{
		length++;
		i++;
	}
	return (length);
}
