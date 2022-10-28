#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to convert
 * Return: void
 */

void print_binary(unsigned long int n)
{
	print(n);
}

/**
 * print - converts and prints the binary equivalent of a number
 * @n: number to convert
 * Return: void
 */

void print(unsigned long int n)
{
	int arr[100], i = 0;
	
	if (n == 0)
	{
		_putchar('0' + n);
		return;
	}
	while (n > 0)
	{
		arr[i] = n % 2;
		n /= 2;
		i++;
	}
	i--;
	
	while (i >= 0)
	{
		_putchar('0' + arr[i]);
		i--;
	}
}
