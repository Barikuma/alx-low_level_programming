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

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
