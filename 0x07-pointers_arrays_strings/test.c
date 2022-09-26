#include <stdio.h>

char *mcpy(char *dest, char *src, int n);

int main(void)
{
	char a[] = "abcdefghij";
	char b[] = {'m', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y'};
	int i = 0;

	while (a[i] != '\0')
	{
		i++;
	}
	printf("%d\n", i);

	return (0);
}

char *mcpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		*(dest + i) = src[i];
	return (dest);
}
