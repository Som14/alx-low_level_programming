#include "main.h"

/**
 * _strlen_recursion -size
 * @s: pinter to string params
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * @l: position
 * Return: booleans
 */
int is_palindrome(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + l))
	{
		return (is_palindrome(s + 1, l -2));
	}
	return (0);
}
