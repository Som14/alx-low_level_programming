#include "main.h"

/**
 * print_times_table - prints the n times table,
 * starting with 0
 * @n: value to be printed
 */
void print_times_table(int n)
{
	int num1, num2, tot;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar('0');
			for (num2 = 1; num2 <= n; num2++)
			{
				_putchar(',');
				_putchar(' ');
				tot = num1 * num2;
				if (tot <= 99)
					_putchar(' ');
				if (tot <= 9)
					_putchar(' ');
				if (tot >= 100)
				{
					_putchar((tot / 100) + '0');
					_putchar(((tot / 10) % 10) + '0');
				}
				else if (tot <= 99 && tot >= 10)
				{
					_putchar((tot / 10) + '0');
				}
				_putchar((tot % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
