#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabets
 *
 * Description: This function uses a for
 * loop to repeat the printing of lowercase alphabets
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j <= 25)
		{
			putchar(j + 97);
			j++;
		}
		i++;
		putchar('\n');
	}
}

/**
 * main - Function that first executes
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
