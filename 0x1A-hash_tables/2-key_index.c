#include "hash_tables.h"

/**
 * key_index - Function gives the index of @key
 * @key: Key of which index is required
 * @size: Size of the hash table array
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
