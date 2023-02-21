#include <stdio.h>
#include <unistd.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int c;
	int d;

	for (c = 0; c <= 99; c++)
	{
		putchar(c);
		for (d = 0; d <= 99; d++)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	Return(0);
}
