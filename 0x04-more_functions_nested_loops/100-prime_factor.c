#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/**
 * prime_tester - Function that tests for prime numbers
 * @num: number to be examined
 *
 * Return: true if it is a prime, false if otherwise
 */
bool prime_tester(long num)
{
	long count = 5;

	if (num <= 3)
		return (num > 1);
	if ((num % 2 == 0) || (num % 3 == 0))
		return (false);

	while (pow(count, 2) <= num)
	{
		if (num % count == 0 || num % (count + 2) == 0)
			return (false);
		count += 6;
	}
	return (true);
}
/**
 * main - Function Prints largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	long i, j;
	long num;

	num = 612852475143;
	j = 0;

	for (i = 2; i < num / 2; i = 2 * j + 1)
	{
		if (prime_tester(i))
		{
			while (true)
			{
				if (num % i == 0 && num > i)
				{
					num = num / i;
				}
				else
					break;
			}
		}
		j++;
	}
	printf("%ld\n", num);
	return (0);
}
