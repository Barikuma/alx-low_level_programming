#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, f1 = 1, f2 += f1, fnext;

	for (i = 1 ; i <= 50 ; i++)
	{
		fnext = f1 + f2;
		printf("%d\n", fnext);
		f1 = f2;
		f2 = fnext;
	}

	return (0);
}
