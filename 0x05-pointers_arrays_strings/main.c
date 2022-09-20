#include "main.h"
#include <stdio.h>
int _strlen(char *s);

int main(void)
{
	char *s = "Hello, I am Kuma. I wrote this program";
	_puts(s);

	return 0;
}

void _puts(char *s)
{
	int i = 0;
	for ( ; s[i] != '\0' ; i++)
	{
	}
	
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
