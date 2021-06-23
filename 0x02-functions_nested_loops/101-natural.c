#include <stdio.h>

/**
 * main - Function that prints sum of multiplies of 3 & 5
 *
 * Return: 0
 */
int main(void)
{
	int i, n;

	n = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			n = n + i;
		}
	}
	printf("%d\n", n);
	return (0);
}
