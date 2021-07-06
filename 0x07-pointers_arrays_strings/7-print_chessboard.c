#include "holberton.h"

/**
 * print_chessboard - Function prints the chessboard to stdout
 * @arr: Two dimentional array passed
 *
 * Return: Void
 */
void print_chessboard(char (*arr)[8])
{
	int i, j;

	i = 0, j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			printf("%c", arr[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
}
