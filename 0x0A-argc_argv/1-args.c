#include "holberton.h"

/**
 * main - Function prints number of arguments
 * @argc: Number of arguments
 * @argv: Array of arguments of type char
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
