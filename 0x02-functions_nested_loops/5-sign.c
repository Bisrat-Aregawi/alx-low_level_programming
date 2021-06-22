#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n: number to be examined
 *
 * Return: 1 if greater than 0, -1 if less and 0 if exactly 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	} else if (n < 0)
	{
		printf("-");
		return (-1);
	}
	printf("0");
	return (0);
}
