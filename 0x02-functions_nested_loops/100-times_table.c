#include <stdio.h>
/**
 * print_times_table - Function that prints times table for different n
 * @n: the number used to limit the last row
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n != 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i == 0)
					putchar(48);
				else if ((i * j) >= 10 && (i * j) < 100)
				{
					putchar(((j * i) / 10) + 48);
					putchar(((j * i) % 10) + 48);
				} else if ((i * j) >= 100)
				{
					putchar(((i * j) / 100) + 48);
					putchar((((i * j) / 10) % 10) + 48);
					putchar(((i * j) % 10) + 48);
				} else
					putchar(((j % 10) * i) + 48);
				if (j < n)
				{
					putchar(44);
					if ((i * (j + 1)) < 10)
						printf("   ");
					else if ((i * (j + 1)) < 100)
						printf("  ");
					else
						printf(" ");
				}
			}
			putchar('\n');
		}
	} else if (n == 0)
	{
		putchar(48);
		putchar('\n');
	}
}
