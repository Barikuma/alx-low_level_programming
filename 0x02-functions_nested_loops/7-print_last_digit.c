#include "main.h"

/**
 * print_last_digit - gets the last digit of a number
 * @l: function parameter
 *
 * Return: the last digit
 */

int print_last_digit(int l)
{
	_putchar('0' + l % 10);
	return (l % 10);
}
