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
	putchar(r + '0');

	r = _islower(108);
	putchar(r + '0');

	r = _islower(69);
	putchar(r + '0');

	r = _islower(0);
	putchar(r + '0');

	putchar('\n');
	return (0);
}
