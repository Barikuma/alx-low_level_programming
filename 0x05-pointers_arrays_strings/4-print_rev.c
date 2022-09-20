#include "main.h"

/**
 * print_rev - prints a string in reverse format
 * @s: string pointer
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	for (; s[i] != '\0' ; i++)
	{
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
