#include "holberton.h"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("%s\n", "Error");
		exit(EXIT_FAILURE);
	}
	else
	{
		int num1 = atoi(*(argv + 1));
		int num2 = atoi(*(argv + 2));
		printf("%d\n", num1 * num2);
	}
	exit(EXIT_SUCCESS);
}
