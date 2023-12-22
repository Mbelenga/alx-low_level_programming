#include "hash_tables.h"


/**
 * key_index - A function that calculates the index of a key
 * @key: The key tht we arelooking for it index
 * @size: The size of the array of the hash table
 *
 * Return: The index of the key
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* To get the index value % size */
	unsigned int index;
	unsigned int value; /*This is the value sociated with the key */

	value = hash_djb2(key);
	index = value % size;

	return (index);
}
