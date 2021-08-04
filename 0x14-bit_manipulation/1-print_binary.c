#include "main.h"

/**
 * print_binary - Function prints binary representation of a number
 * @n: Unsigned long integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/* Initialize 'i' to store count b/n significant bits */
	int i = 0;
	/* Declare 'var' to shift it until we reach 0 while incrementing 'i' */
	unsigned long int var;
	/* If the number is zero just print it out and finish */
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* Initialize 'var' to 'n' for iteration */
	var = n;
	/* Iterate through until 'var' equals 0 and increment 'i' */
	while (var)
	{
		var >>= 1;
		i++;
	}
	/* Print in reverse by shifting 'n' and extracting the last bit */
	while (i--)
		_putchar(((n >> i) & 1) + 48);
}
