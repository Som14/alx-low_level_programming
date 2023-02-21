#include "main.h"

/**
 * _islower - prints the lowercase charcter
 * @c: the charcter to be choosen
 * Return: 1 for lowercase charcter and 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
