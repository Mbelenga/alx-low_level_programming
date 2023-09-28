#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: points to a number
 * @index: index of the bit starting with from 0
 * Return: 1 | -1 (if an error has occured)
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)

		return (-1);
	*n |= (1 << index);
	return (1);
}
