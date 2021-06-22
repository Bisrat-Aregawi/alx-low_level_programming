#include <stdio.h>
/**
 * print_alphabet - Function that prints alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	i = 0;

	while (i <= 25)
	{
		putchar(i + 97);
		i++;
	}
	putchar('\n');
}
/**
 * main - Function that first executes
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void);
