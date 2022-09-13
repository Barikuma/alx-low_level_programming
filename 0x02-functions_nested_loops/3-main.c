#include "main.h"

/**
 * main - run the _islower function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int r;

	r = _islower(65);
	_putchar(r + '0');

	r = _islower(108);
	_putchar(r + '0');

	r = _islower(69);
	_putchar(r + '0');

	r = _islower(0);
	_putchar(r + '0');

	_putchar('\n');
	return (0);
}
