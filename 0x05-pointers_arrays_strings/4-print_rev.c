#include "main.h"

/**
 * print_rev - prints a string in reverse format
 * @s: string pointer
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0, i = 0;

	for (; s[len] != '\0' ; len++)
	{
	}
	while (i)
	{
		if (s[i] == '\0')
			_putchar(s[i-1])
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
