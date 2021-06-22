#include <stdio.h>

/**
 * jack_bauer - Fuction that prints 24 hour every minute
 *
 * Return: 24 hours every minute
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(58);
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			putchar('\n');
			j++;
		}
		i++;
	}
}
