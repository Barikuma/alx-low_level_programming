#include <stdio.h>

/**
 * main - sums the even numbers less than 4 million in the fibonacci sequence
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long f1 = 1, f2 = 0, fnext, sum;
	int i;

	for (i = 1 ;; i++)
	{
		fnext = f1 + f2;
		if ((fnext % 2 == 0))
		{
			if ((sum + fnext) < sizeof(unsigned int))
				sum += fnext;
		}
		f2 = f1;
		f1 = fnext;
	}
	printf("%lu\n", sum);
	return (0);
}
