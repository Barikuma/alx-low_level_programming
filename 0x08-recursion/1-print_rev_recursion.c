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
	{
		return;
	}
	*(s + len) = '\0';
	len--;
	s = s + len;
	_print_rev_recursion((s - 1));
	_putchar(*s);
}
