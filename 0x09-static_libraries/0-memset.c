#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: pointer to the memory area to be filled
 * @b: character to fill the memory with
 * @n: number of bytes
 * Return: a pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
