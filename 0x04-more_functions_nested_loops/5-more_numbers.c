#include "holberton.h"

/**
 * more_numbers - Function that lists between 0 and 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int j, k, l;
	int small[2];

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 15; k++)
		{
			small[0] = k / 10;
			small[1] = k % 10;
			if (small[0] == 0)
				_putchar(k + 48);
			else
			{
				for (l = 0; l < 2; l++)
				{
					_putchar(small[l] + 48);
				}
			}
		}
		_putchar('\n');
	}
}
