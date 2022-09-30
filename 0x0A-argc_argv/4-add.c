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

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0 ; i < argc; i++)
	{
		if (*argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
