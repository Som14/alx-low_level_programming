#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big-endian
 * 1 if little-endian - 1
 */

int get_endianness(void)
{
	int n = 1;
	char *endian = (char *)&n;

	if (*endian == 1)
		return (1);

	return (0);
}
