#include "holberton.h"

/**
 * flip_bits - returns hamming distance of two bit words
 * which is the number of bits you would need to flip to get
 * from one number to another
 * @n: the first bit word
 * @m: the second bit word
 *
 * Return: the hamming distance
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shift = (sizeof(n) * BYTE_LENGHT);
	int dist = 0;

	while (shift--)
		dist += (n >> shift & 1) != (m >> shift & 1);
	return (dist);
}
