#include "hash_tables.h"

/**
 * hash_djb2 - Function implements the djb2 algorithm
 * @str: String required to generate the hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
