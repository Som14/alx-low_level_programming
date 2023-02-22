#include <stdio.h>
/**
 * main -  prints the sum of all multiples of 3 or 5 below 1024
 *Return: Always (Success)
 */
int main(void)
{
	int a, z = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			z += a;
		}
		a++;
	}
	printf("%d\n", z);
	return (0);
}
