#include <stdio.h>

#define NUM_SPLITER 10000000000
#define SPLITER_LIMIT 9999999999

/**
 * main - Function lists first 98 FIBONACCIS
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long n1, n2, fib;
	unsigned long n11, n12, n21, n22, H1, H2;

	n1 = 0, n2 = 1;

	for (i = 0; i < 92; i++)
	{
		fib = n1 + n2;
		printf("%lu, ", fib);

		n1 = n2;
		n2 = fib;
	}

	n11 = n1 / NUM_SPLITER;
	n12 = n1 % NUM_SPLITER;
	n21 = n2 / NUM_SPLITER;
	n22 = n2 % NUM_SPLITER;

	for (i = 0; i < 6; i++)
	{
		H1 = n11 + n21;
		H2 = n12 + n22;
		if (n12 + n22 > SPLITER_LIMIT)
		{
			H1 += 1;
			H2 %= NUM_SPLITER;
		}
		if (i < 5)
			printf("%lu%lu, ", H1, H2);
		else
			printf("%lu%lu\n", H1, H2);

		n11 = n21;
		n12 = n22;
		n21 = H1;
		n22 = H2;
	}
	return (0);
}
