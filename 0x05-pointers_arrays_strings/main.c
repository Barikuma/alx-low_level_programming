#include "main.h"
#include <stdio.h>
int _strlen(char *s);

int main(void)
{
	char *s = "Hello";
	int len = _strlen(s);
	printf("%d\n", len);

	return 0;
}

int _strlen(char *s)
{
	int i = 0;
	for ( ; s[i] != '\0' ; i++);
	return i;
}
