#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - Function that prints untill 98
 * @n: number to be examined
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	} else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	} else
	{
		printf("%d\n", n);
	}
}
