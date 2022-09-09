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
		for (j = i + 1 ; j < 9 ; j++)
		{
			for (k = j + 1 ; k < 10 ; k++)
			{
				for (l = k + 1 ; l < 10 ; l++)
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
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
