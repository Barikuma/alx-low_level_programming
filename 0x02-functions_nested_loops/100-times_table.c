#include "main.h"

/**
 * print_times_table - prints times table of n number
 * @n: function parameter
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, result;

	for (i = 0 ; i <= n ; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1 ; j <= n ; j++)
		{
			result = i * j;
			if (result < 10)
			{
				_putchar(' ');
				_putchar('0' + result);
			}
			else if (result >= 10 && result < 100)
			{
				_putchar(' ');
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			else
			{
				int r = result % 100;

				_putchar(' ');
				_putchar('0' + result / 100);
				_putchar('0' + r / 10);
				_putchar('0' + r % 10);
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
