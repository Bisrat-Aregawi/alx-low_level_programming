#include <stdio.h>

/**
 * main - Entry point to program
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i + j < 113)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
