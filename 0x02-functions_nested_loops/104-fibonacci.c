#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: Always - (success)
 */

int main(void)
{
	unsigned long long f1 = 1, f2 = 0, fnext;
	int i;

	for (i = 0 ; i < 98 ; i++)
	{
		fnext = f1 + f2;
		printf("%llu", fnext);
		if (i != 97)
		{
			printf(", ");
		}
		f2 = f1;
		f1 = fnext;
	}
	printf("\n");
	return (0);
}
