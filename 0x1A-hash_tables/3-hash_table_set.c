#include "hash_tables.h"

/**
 * hash_table_set - This function adds elements to the hash table
 * @ht: The hash table
 * @key: The key which is not an empty string
 * @value: The value associated with the key
 *
 * Return: 1 if successfull otherwise 0
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, len;
	hash_node_t *hash_node, *temp;

	if (ht == NULL || value == NULL || key == NULL)
		return (0);
	len = ht->size;
	index = key_index((const unsigned char *)key, len);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);

	hash_node->key = strdup(key);
	if (hash_node->key == NULL)
		return (0);

	hash_node->value = strdup(value);
	if (hash_node->value == NULL)
		return (0);

	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}
