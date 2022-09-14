#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */

void hr_and_min_less_than_10(void);
void hr10_less_min10_greater(void);
void hr10_greater_min10_less(void);
void hr10_greater_min10_greater(void);

void jack_bauer(void)
{
	int h = 0, m;

	while (h <= 23)
	{
		m = 0;
		while (m <= 59)
		{
			if ((m < 10) && (h < 10))
				hr_and_min_less_than_10();
			else if ((m >= 10) && (h < 10))
			{
				hr10_less_min10_greater();
			}
			else if ((m < 10) && (h >= 10))
			{
				hr10_greater_min10_less();
			}
			else
			{
				hr10_greater_min10_greater();
			}
			m++;
			_putchar('\n');
		}
		h++;
	}
}

/**
 * hr10_greater_min10_greater - prints values >= 10 hours and >= 10 minutes
 *
 * Return: void
 */

void hr10_greater_min10_greater(void)
{
	_putchar('0' + h / 10);
	_putchar('0' + h % 10);
	_putchar(':');
	_putchar('0' + m / 10);
	_putchar('0' + m % 10);
}

/**
 * hr10_greater_min10_less - prints values >= 10 hours and < 10 minutes
 *
 * Return: void
 */

void hr10_greater_min10_less(void)
{
	_putchar('0' + h / 10);
	_putchar('0' + h % 10);
	_putchar(':');
	_putchar('0' + 0);
	_putchar('0' + m;)
}

/**
 * hr10_less_min10_greater - prints values < 10 hours and >= 10 minutes
 *
 * Return: void
 */

void hr10_less_min10_greater(void)
{
	_putchar('0' + 0);
	_putchar('0' + h);
	_putchar(':');
	_putchar('0' + m / 10);
	_putchar('0' + m % 10);
}

/**
 * hr_and_min_less_than_10 - prints values < 10 hours and < 10 minutes
 *
 * Return: void
 */

void hr_and_min_less_than_10(void)
{
	_putchar('0' + 0);
	_putchar('0' + h);
	_putchar(':');
	_putchar('0' + 0);
	_putchar('0' + m);
}
