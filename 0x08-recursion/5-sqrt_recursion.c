#include "main.h"

/**
 * _sqrt_recursion - finds the square root of a number
 * @n: the number to find its square root
 * Retrun: the square root
 */

int _sqrt_recursion(int n)
{
	int i = 1, count = 0;

	if ((n - i) == 1 || (n - 1) < 0)
		return (-1);
	if ((n - i) == 0)
	{
		count++;
		return (count);
	}
	
	return (count + _sqrt_recursion(n - i));
}

