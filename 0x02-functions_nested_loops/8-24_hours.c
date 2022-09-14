#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h = 0, m;

	while (h <= 23)
	{
		m = 0;
		while (m < 59)
		{
			if ((m < 10) && (h < 10))
			{
				_putchar('0' + 0);
				_putchar('0' + h);
				_putchar(':');
				_putchar('0' + 0);
				_putchar('0' + m);
			}
			else if ((m >= 10) && (h < 10))
			{
				_putchar('0' + 0);
				_putchar('0' + h);
				_putchar(':');
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
			}
			else if ((m < 10) && (h >= 10))
			{
				_putchar('0' + h / 10);
				_putchar('0' + h % 10);
				_putchar(':');
				_putchar('0' + 0);
				_putchar('0' + m);
			}
			else
			{
				_putchar('0' + h / 10);
				_putchar('0' + h % 10);
				_putchar(':');
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
			}
			m++;
			_putchar('\n');
		}
		h++;
	}
}
