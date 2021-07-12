#include "holberton.h"
int recur(char **, int, int);

/**
 * main - Function adds passed arguments
 * @argc: Number of arguments
 * @argv: Array of arguments of type char
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%d\n", 0);
		exit(EXIT_SUCCESS);
	} else
		printf("%d\n", recur(argv, argc, 1));
	exit(EXIT_SUCCESS);
}

/**
 * recur - Function recursively addes arguments passed
 * from the main function
 * @arr: Arry of arguments passed directly from main
 * @length: Number of arguments passed directly from main
 * @idx: Index counter for passed array
 *
 * Return: Sum of arguments. 0 if one of them are not a number
 */
int recur(char *arr[], int length, int idx)
{
	if (idx == length)
		return (0);
	else if (atoi(*(arr + idx)) == 0 && *(*arr + idx) != 48)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	return (atoi(*(arr + idx)) + recur(arr, length, idx + 1));
}
