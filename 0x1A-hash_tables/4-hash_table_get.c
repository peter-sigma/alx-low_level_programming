#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associeted with a key
 * @ht: a pointer to hash table
 * @key: a key to retrive value
 * Return: a number or NULL if key does not exit.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t  *b;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	b = ht->array[index];

	while (b)
	{
		if (!strcmp(key, b->key))
			return (b->value);
		b = b->next;
	}
	return (NULL);
}
