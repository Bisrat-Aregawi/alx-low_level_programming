#include "holberton.h"
/**
 * _atoi - Function converts strings to integers
 * @s: string to be manipulated
 *
 * Return: pointer to an integer array
 */
int _atoi(char *s)
{
	int i, length, num, negatives;

	i = 0, length = 0, negatives = 0, num = 0;
	while (*(s + i))
		length++, i++;
	for (i = 0; i < length; i++)
	{
		int ch = *(s + i);

		if (ch == 45)
		{
			negatives++;
			continue;
		}
		if (ch >= 48 && ch <= 57)
		{
			if ((negatives - 1) % 2 == 0)
			{
				if (num >= 0)
					num *= -1;
				num = num * 10 - (ch - 48);
			}
			if (num >= 0)
				num = num * 10 + (ch - 48);
		}
		else
			if (num != 0)
				break;
	}
	return (num);
}
