#include "holberton.h"

/**
 * main - Function that writes the string Holberton
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char c[] = "Holberton";

	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
