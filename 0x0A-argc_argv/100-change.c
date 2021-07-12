#include "holberton.h"

/**
 * main - Function prints minimum number of
 * coins to make change for an amount of money
 * @argc: Number of arguments
 * @argv: Array of arguments of type char
 *
 * Return: 0 if argv[argc - 1] is a single number. 1 otherwise
 */
int main(int argc, char **argv)
{
	int i, sum, reg, loop;
	int arr[5] = {25, 10, 5, 2, 1};
	int num = atoi(*(argv + argc - 1));

	i = 0, sum = 0, reg = 0;
	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	} else if (num < 0)
	{
		printf("%d\n", 0);
		exit(EXIT_SUCCESS);
	}
	while (i < 5)
	{
		loop = 1;
		while (loop)
		{
			if (num >= arr[i])
			{
				sum += arr[i];
				num -= arr[i];
				reg++;
			}
			else
				loop = 0;
		}
		i++;
	}
	printf("%d\n", reg);
	exit(EXIT_SUCCESS);
}
