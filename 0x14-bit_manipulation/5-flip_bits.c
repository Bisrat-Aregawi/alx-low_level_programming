#include "main.h"

/**
 * flip_bits - Function returns number of bits to flip to transform numbers
 * @n: Number to examine
 * @m: Number to target
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int range = 0;
	unsigned int bits_cnt = 0;
	unsigned long int xor1 = n ^ m, xor2 = n ^ m;

	while (xor1)
		xor1 >>= 1, range++;
	while (range--)
	{
		if ((xor2) & 1)
			bits_cnt++;
		xor2 >>= 1;
	}
	return (bits_cnt);
}
