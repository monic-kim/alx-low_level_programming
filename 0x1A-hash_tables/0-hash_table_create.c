#include "hash_tables.h"

/**
 * hash_table_create - createsa hash table
 * @size: size of array
 * Return: NULLif error , pointer
 * to new hash table if not
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int n;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	for (n = 0; n < size; n++)
		ht->array[n] = NULL;
	return (ht);
}
