#include <stdio.h>
#include <unistd.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 57; ++i)
	{
		putchar(i);
		for (j = 48; j <= 57; ++j)
		{
			for (k = 48; k <= 57; ++k)
			{
			}
		}
	}
	putchar(',');
	putchar(' ');
	putchar('\n');
	Return(0);
}
