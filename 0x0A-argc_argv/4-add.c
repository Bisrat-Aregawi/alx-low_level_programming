#include "holberton.h"

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
		printf("%d\n", level1Recur(argv, argc, 1));

	exit(EXIT_SUCCESS);
}

/**
 * level1Recur - Function recursively addes arguments passed
 * from the main function
 * @arr: Arry of arguments passed directly from main
 * @length: Number of arguments passed directly from main
 * @idx: Index counter for passed array
 *
 * Return: Sum of arguments. 0 if one of them are not a number
 */
int level1Recur(char *arr[], int length, int idx)
{
	int retVal;

	retVal = 1;

	if (idx == length)
		return (0);
	else if (atoi(*(arr + idx)) < 0)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	else if (**(arr + idx) < '0' && **(arr + idx) > '9')
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	level2Recur(*(arr + idx), &retVal, 0);
	if (!retVal)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	return (atoi(*(arr + idx)) + level1Recur(arr, length, idx + 1));
}

/**
 * level2Recur - Function recursively checks each string
 * in the argument array
 * @str: String pointer passed
 * @ret: Integer pointer for checking NUMNESS
 * @idx: Index for string pointer traversal
 *
 * Return: void
 */
void level2Recur(char *str, int *ret, int idx)
{
	if (*(str + idx))
	{
		if (*(str + idx) < '0' || *(str + idx) > '9')
			*ret = 0;
		level2Recur(str, ret, idx + 1);
	}
}
