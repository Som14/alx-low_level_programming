#include "main.h"

/**
 * flip_bits - counts the number of bits needed
 * to be flipped to get from one number to another
 * @n: number
 * @m: number to flip n to
 *
 * Return: the necessary number of bits to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive_or = n ^ m, bit = 0;

	while (exclusive_or > 0)
	{
		bit += (exclusive_or & 1);
		exclusive_or >>= 1;
	}

	return (bit);
}
