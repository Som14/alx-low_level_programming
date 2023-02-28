#include "main.h"

/**
 * swap_int - swaps the value of 2 integer
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
