#include "holberton.h"

/**
 * alloc_grid - Function returns a pointer to a 2 dimensional int array
 * @width: Length of each nested array
 * @height: Number of nested arrays
 *
 * Return: Pointer to array of @width * @height
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr2d;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr2d = (int **)malloc(sizeof(int *) * height);
	if (arr2d == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr2d[i] = (int *)malloc(sizeof(int) * width);
		if (arr2d[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(arr2d[j]);
			free(arr2d);
			return (NULL);
		}
	}
	return (arr2d);
}
