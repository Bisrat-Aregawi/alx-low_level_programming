#include <stdio.h>

/**
 * times_table - Function that prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 0)
			{
				putchar(48);
			} else
			{
				k = (j % 10) * i;
				if (k >= 10)
				{
					putchar((k / 10) + 48);
					putchar((k % 10) + 48);
				} else
				{
					putchar(k + 48);
				}
			}
			if (j < 9)
			{
				putchar(44);
				if ((((j + 1) % 10) * i) >= 10)
				{
					putchar(32);
				} else
				{
					putchar(32);
					putchar(32);
				}
			}
		}
		putchar('\n');
	}
}
