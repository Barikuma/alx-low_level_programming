#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, l;

	i = 0;

	for (i = i ; i < 10 ; i++)
	{
		for (j = 0 ; j < 9 ; j++)
		{
			for (k = 0 ; k < 10 ; k++)
			{
				for (l = 0 ; l < 10 ; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if ((i == 9) && (j == 8) && (k == 9) && (l == 9))
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
		}
	}
	putchar('\n');
	return (0);
}
