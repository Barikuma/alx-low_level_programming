#include <stdio.h>

char *mcpy(char *dest, char *src, int n);

int main(void)
{
	char a[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	char b[] = {'m', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y'};
	int i;

	for (i = 0 ; i < 10 ; i++)
		printf("%c", a[i]);
	putchar('\n');
	
	mcpy(a+5, b, 5);
	for (i = 0 ; i < 10 ; i++)
		printf("%c", a[i]);
	putchar('\n');

	return (0);
}

char *mcpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		*(dest + i) = src[i];
	return (dest);
}
