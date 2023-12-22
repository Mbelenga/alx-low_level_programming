#include "hash_tables.h"

/**
 * hash_table_create - This function creates a hash table
 * @size: Size of the array
 *
 * Return: returns a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size);
{
	unsigned int count = 0;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	/*chech if memory allocation was successful */
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array  = malloc(sizeof(hash_node_t *) * size);
	/*chech if memory allocation was successful */
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	while (count < size)
	{
		hash_table->array[count] = NULL;
		count++;
	}
	return (hash_table);
}
