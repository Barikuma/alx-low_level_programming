#include <stdio.h>
#include <string.h>

char *mcpy(char *dest, char *src, int n);

int main(void)
{
	char a[] = "sexy not lun";

	printf("%ld\n", strspn((a + 9), "ln"));

	return (0);
}

char *mcpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		*(dest + i) = src[i];
	return (dest);
}
