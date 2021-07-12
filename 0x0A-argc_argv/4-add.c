#include "holberton.h"
int recur(char **, int ,int);
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
int recur(char *arr[], int length, int idx)
{
	if (idx == length)
		return 0;
	else if (atoi(*(arr + idx)) == 0 && *(*arr + idx) != 48)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	return atoi(*(arr + idx)) + recur(arr, length, idx + 1);
}
