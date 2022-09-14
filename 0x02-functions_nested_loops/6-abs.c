#include "main.h"

/**
 * _abs - prints the absoulute value of a number
 * @x: function parameter
 *
 * Return: x
 */

int _abs(int x)
{
	if ((x <= 0) && (x > -10))
	{
		_putchar('0' - x);
	}
	else
	{
		_putchar('0' - x/10);
		_putchar('0' - x%10);
	}
	if ((x > 0) && (x < 10))
	{
		_putchar('0' + x);
	}
	else
	{
		_putchar('0' + x/10);
		_putchar('0' + x%10);
	}
	_putchar('\n');
	return (0);
}
