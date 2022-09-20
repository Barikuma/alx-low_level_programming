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
	len -= 1;
	while (i < len)
	{
		_putchar(s[len]);
		i++;
	}
	_putchar('\n');
}
