#include "holberton.h"

/**
 * main - Function prints all arguments it recieves
 * @argc: Number of arguments
 * @argv: Array of arguments of type char
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
