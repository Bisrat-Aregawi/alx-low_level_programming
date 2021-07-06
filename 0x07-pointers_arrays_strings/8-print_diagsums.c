#include "holberton.h"

/**
 * print_diagsums - Function that prints sum of the two diagonals
 * of a square matrix of integers
 * @a: Array of square matrix
 * @size: Size of the matrix @a
 *
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i, j, forDiag, backDiag;

	j = size - 1, forDiag = 0, backDiag = 0;

	for (i = 0; i < size; i++)
	{
		backDiag += *(a + i * size + i);
		forDiag += *(a + i * size + j - i);
	}
	printf("%d, %d\n", backDiag, forDiag);
}
