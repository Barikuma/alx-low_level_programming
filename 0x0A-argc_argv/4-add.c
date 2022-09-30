#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: ardument counter
 * @argv: command line argument
 * Return: 1 if and Error else 0;
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 0 ; i < argc; i++)
		{
			if (*argv[i] <= '9' && *argv[i] >= '0')
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("0\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}
