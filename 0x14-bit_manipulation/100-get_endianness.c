#include "main.h"
/**
 * get_endianness - Function checks endianess
 *
 * Return: 1 if little endian, 0 if big endian byte order
 */
int get_endianness(void)
{
	int n = 1;

	if ((n >> 1) == 0)
		return (1);
	return (0);
}
