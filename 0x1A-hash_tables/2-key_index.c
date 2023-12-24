#include "hash_tables.h"
/**
 * key_index - gt the index of a key
 * @key: hthe key to get hte ndex of
 * @size: sie of the array
 * Return: index of the key
 * Descripton: uses djb2 algorithm
 */

unsigned long int key_index(const unsigned char *key,
		unsigned long int size)
{
	return (hash_djb2(key) % size);
}
