#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

int _strlen(const char * const s);

/**
 * print_all - prints all function arguments according to its format
 * @format: the format in which an argumennt should be printed
 * s for string, i for intger, f for float, c for char
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char f_char[4] = {'c', 'f', 'i', 's'};
	int i = 0, d, j, len = _strlen(format);
	char ch, *str;
	double f;

	va_start(args, format);

	while (i < len)
	{
		j = 0;

		switch (format[i])
		{
			case 'c':
				ch = va_arg(args, int);
				printf("%c", ch);
				break;
			case 'i':
				d = va_arg(args, int);
				printf("%d", d);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
			default:
				break;
		}

		while (j < len)
		{
			if (format[i] == f_char[j] && i < (len - 1))
			{
				printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * _strlen - calculates the length of a string
 * @s: string to count
 * Return: string length
 */

int _strlen(const char * const s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
