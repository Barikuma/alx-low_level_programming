#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, r;

	for (i = 0 ; i <= 15 ; i++)
	{
		r = i % 16;
		if (r < 10)
		{
			putchar(r + '0');
		}
		else
		{
			putchar(r + 87);
		}

	}
	putchar('\n');
	return (0);
}
