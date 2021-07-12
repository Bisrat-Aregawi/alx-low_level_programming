#include "holberton.h"

/**
 * main - Function multiplies numbers passed as arguments
 * @argc: Number of arguments
 * @argv: Array of arguments of type char
 *
 * Return: 0 if there are agruments present. 1 otherwise
 */
int main(int argc, char **argv)
{
	if (argc <= 2)
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
