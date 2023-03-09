#include "main.h"

/**
 * factorial - factorial of a given number
 * @s: pointer block to fill
 * Return: strlen_recursion
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	
	else if (n < 0)
		return (-1);
	
	else
		return (n * factorial(n - 1));
}
