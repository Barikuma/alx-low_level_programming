#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: funnction parameter
 *
 * Return: 1 if true and 0 if false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
