#include "holberton.h"

void leeter(char *);

/**
 * leet - Function encodes a string into LEET
 * @str: String to be manipulated
 *
 * Return: Pointer to manipulated @str
 */
char *leet(char *str)
{
	int i;

	i = 0;

	while (*(str + i))
	{
		leeter(str + i);
		i++;
	}
	return (str);
}
/**
 * leeter - Function encodes passed character to 1337 format
 * @ch: Character to be leeted
 *
 * Return: void
 */
void leeter(char *ch)
{
	int i;
	char smallDB[5] = {'o', 'l', 'e', 'a', 't'};
	char capDB[5] = {'O', 'L', 'E', 'A', 'T'};
	char leetDB[5] = {'0', '1', '3', '4', '7'};

	for (i = 0; i < 5; i++)
	{
		if (*ch == smallDB[i] || *ch == capDB[i])
			*ch = leetDB[i];
	}
}
