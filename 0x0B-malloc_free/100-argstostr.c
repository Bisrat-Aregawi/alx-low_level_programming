#include "holberton.h"

/**
 * argstostr - Function concatenates arguments passed with \n delimiter
 * @ac: Number of arguments passed
 * @av: Array of strings of arguments passed
 *
 * Return: Pointer to concatenated string of @av elements
 */
char *argstostr(int ac, char **av)
{
	int i, lengthOfArgs, NumOfArgs;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	lengthOfArgs = 0, NumOfArgs = ac;

	while (ac--)
		lengthOfArgs += strlen(*(av + ac));
	str = (char *)malloc(sizeof(char) * (lengthOfArgs + NumOfArgs + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < lengthOfArgs + NumOfArgs; i++)
	{
		if (*(*(av + 0) + i) == '\0')
			*(str + i) = '\n';
		else
			*(str + i) = *(*(av + 0) + i);
	}
	*(str + i) = '\0';

	return (str);
}
