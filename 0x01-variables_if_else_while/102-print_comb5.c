#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	a = 0;

	for (a = a ; a <= 98 ; a++)
	{
		for (b = a + 1 <= 99 ; b++)
		{
			putchar(a + '0');
			putchar(' ');
			putchar(b + '0');
			if ((a == 98) && (b == 99))
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
