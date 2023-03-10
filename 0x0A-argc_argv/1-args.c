#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @args: argument count
 * @argv: agrument vector
 * Return: returns 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
