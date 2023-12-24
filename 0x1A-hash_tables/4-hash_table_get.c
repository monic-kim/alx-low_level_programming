#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: ponter to the hash table
 * @key: the key
 * Return: NULL if key is not matched
 * otherwise - value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(key, node->key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
