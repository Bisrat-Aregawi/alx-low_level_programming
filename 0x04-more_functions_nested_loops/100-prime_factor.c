#include <stdio.h>

/**
 * main - Function Prints largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	long i;
	long num;

	num = 612852475143;

	for (i = 2; i < num / 2; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			i--;
		}
	}
	printf("%ld\n", num);
	return (0);
}
