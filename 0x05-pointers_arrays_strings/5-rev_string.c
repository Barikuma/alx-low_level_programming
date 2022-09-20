#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string pointer
 * Return: void
 */

void rev_string(char *s)
{
	int len =0, i = 0;

	for (; s[len] != '\0' ; len++)
	{
	}

	while (i > len--)
	{
		_putchar(s[len--]);
	}
	_putchar('\n');
}
