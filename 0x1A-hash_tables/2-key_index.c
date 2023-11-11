#include "hash_tables.h"

/**
 * key_index - index for a given key
 * @key: key (string) to hash
 * @size: size of a hash table
 * Return: index of a 'key' using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

