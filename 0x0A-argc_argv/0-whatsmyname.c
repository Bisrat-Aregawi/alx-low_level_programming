#include "holberton.h"
/**
 * main - Function prints the executable program's name
 * to standard output
 * @argc: Number of arguments
 * @argv: Array of arguments of type char
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	exit(EXIT_SUCCESS);
}
