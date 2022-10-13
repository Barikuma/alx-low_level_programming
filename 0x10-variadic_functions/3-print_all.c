#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

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
	int i = 0, d;
	char ch, *str;
	float f;

	va_start(args, format);

	while (format == NULL)
	{
		printf("\n");
		return;
	}

	while (format[i])
	{
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
				{
					printf("(nil)");
					break;
				}
					printf("%s", str);
			default:
				break;
		}

		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}

