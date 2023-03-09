#include "main.h"

/**
 * _sqrt_recursion - function square root
 * @: interger
 * Return: evaluates square root
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_sqrt_recursion(i + 1, n));
	else if (i * i == n)
		return (i);

	return (-1);

	return (-1);
}
