#include <stdio.h>

/**
 * main - Entry point to program
 *
 * Return: 0
 */
int main(void)
{
	int hex;

	for (hex = 48; hex < 58; hex++)
	{
		putchar(hex);
	}
	for (hex = 97; hex < 103; hex++)
	{
		putchar(hex);
	}
	putchar('\n');

	return (0);
}
