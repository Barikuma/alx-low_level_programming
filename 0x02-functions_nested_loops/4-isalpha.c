#include "main.h"

/**
 * _isalpha - checks if a character is an uppercase or lowercase
 * @c: function parameter
 *
 * Return: 1 if true and 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	return (0);
}
