#include "hash_tables.h"

/**
 * hash_table_get - This function returns valur of key
 * @ht: The hash table
 * @key: Key whose value we are searching for
 *
 * Return: The value, or NULL if key is not found
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *tmp = ht->array[index];

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
