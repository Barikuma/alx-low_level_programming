#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int l_d = n % 10;

	if (l_d == 0)
	{
		printf("the last digit of %d is %d and is 0\n", n, l_d);
	}
	else if ((l_d < 6) && (l_d != 0))
	{
		printf("the last digit of %d is %d and is less than 6 and not 0\n", n, l_d);
	}
	else if (l_d > 5)
	{
		printf("the last digit of %d is %d and is greater than 5\n", n, l_d);
	}
	return (0);
}
