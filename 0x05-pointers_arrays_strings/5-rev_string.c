#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string pointer
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;

	for (; s[i] != '\0' ; i++)
	{
	}

	while (0 > i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
