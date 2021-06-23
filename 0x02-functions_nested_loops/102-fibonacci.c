#include <stdio.h>

/**
 * main - Prints 50 fibonaccis
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long n1, n2, n3;

	n1 = 1;
	n2 = 1;
	n3 = 2;

	for (i = 0; i < 50; i++)
	{
		if (i <= 0)
		{
			printf("%d, ", 1);
		} else if (i != 49)
		{
			printf("%ld, ", n3);
			n1 = n2;
			n2 = n3;
			n3 = n1 + n2;
		} else
		{
			printf("%ld\n", n3);
		}
	}
	return (0);
}
