#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to locate a character in
 * @c: the character to locate
 * Return: c if character is found ot NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			while (*s)
				*s = *s;
			break;
		}
	}
	return (s);

}
