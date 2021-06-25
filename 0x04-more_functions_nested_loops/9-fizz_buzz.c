#include <stdio.h>

/**
 * main - Function substitutes multiples of 3 and 5 with
 * 'fizz' and 'buzz' respectively. Also substitutes multiples
 * of 3 aswell as 5 with 'fizzbuzz'
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{

		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
