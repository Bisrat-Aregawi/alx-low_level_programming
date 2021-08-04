#include "main.h"
/**
 * binary_to_uint - Function converts binary strings to unsigned integers
 * @b: String of binary numbers
 * Return: Converted number, 0 if @b is NULL or more chars other than 0 | 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b == '1' || *b == '0')
		{
			val <<= 1;
			if (*b == '1')
				val += 1;
		}
		else
			return (0);
		b++;
	}
	return (val);
}
