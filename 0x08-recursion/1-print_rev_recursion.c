#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be reversed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int len = _strlen(s);

	if (len < 0)
		_putchar('\n');
	len--;
	_putchar(*(s + len));
	_print_rev_recursion(s);
}
