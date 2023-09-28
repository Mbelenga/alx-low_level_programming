#include "main.h"

/**
 * flip_bits - returns the number of bits you'll need to flip
 * to get from one digit to another
 * @n: contains bits to be flipped
 * @m: in order to get here we should flip
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned long int i = 0;

	x = n ^ m;

	for (i = 0; x != 0; i += 1)
		x &= (x - 1);
	return (i);
}
