#include <stdio.h>

/**
 * main - Prints 50 fibonaccis
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long n1, n2, n3, res;

	n1 = 1;
	n2 = 1;
	n3 = 2;
	res = 0;

	for (i = 0; i >= 0; i++)
	{
		if ((n3 % 2) == 0 && n3 < 4000000)
		{
			res = res + n3;
		} else if (n3 >= 4000000)
		{
			printf("%ld\n", res);
			return (0);
		}
		n1 = n2;
		n2 = n3;
		n3 = n1 + n2;
	}
	return (0);
}
