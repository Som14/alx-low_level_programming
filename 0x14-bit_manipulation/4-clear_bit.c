#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0.
 * @n: pointer to the bit
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: -1 if an error occurs
 * Otherwise 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
