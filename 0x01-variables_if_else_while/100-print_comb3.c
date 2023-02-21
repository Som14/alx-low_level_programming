#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 100; c++)
	{
		putchar(c + '0');
		if (c < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	Return(0);
}
