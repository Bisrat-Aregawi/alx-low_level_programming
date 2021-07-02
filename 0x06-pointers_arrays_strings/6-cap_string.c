#include "holberton.h"

void capitalizer(char *);
int separator(char *);

/**
 * cap_string - Function capitalizes first letters of words
 * @str: String to manipulate
 *
 * Return: Pointer to manipulated string
 */
char *cap_string(char *str)
{
	int i, length;

	i = 0, length = 0;

	while (*(str + i))
	{
		length++;
		i++;
	}
	for (i = 0; i < length; i++)
	{
		capitalizer(str);
		if (separator(str + i))
			capitalizer(str + i + 1);
	}
	return (str);
}
/**
 * capitalizer - Function capitalizes characters passed
 * @ch: Character to CAPITALIZE
 *
 * Return: void
 */
void capitalizer(char *ch)
{
	if (*ch >= 97 && *ch <= 122)
		*ch -= 32;
}
/**
 * separator - Function determines if passed character is
 * a word separator or not
 * @ch: Character to examine
 *
 * Return: 1 if @ch is a word separator. 0 otherwise
 */
int separator(char *ch)
{
	int i;
	int seps[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0; i < 13; i++)
	{
		if (*ch == seps[i])
			return (1);
	}
	return (0);
}
