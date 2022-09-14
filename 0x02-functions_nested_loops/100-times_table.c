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

	if (n < 15 && n > 0)
	{
		for (i = 0 ; i <= n ; i++)
		{
			_putchar('0');
			
			for (j = 1 ; j <= 9 ; j++)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');

				result = i * j;

				if (result <= 9)
				{
					_putchar('0' + result);
				}
				else if (result > 9 && result < 100)
				{
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
				else
				{
					int r = result % 100;

					_putchar('0' + result / 100);
					_putchar('0' + r / 10);
					_putchar('0' + r % 10);
				}
			}
			_putchar('\n');
		}
	}
}
