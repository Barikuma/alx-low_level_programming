#include "main.h"
#include <stdio.h>
int _strlen(char *s);

int main(void)
{
	char *s = "Hello";
	_puts(s);

	return 0;
}

void _puts(char *s)
{
	int i = 0;
	for ( ; s[i] != '\0' ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
