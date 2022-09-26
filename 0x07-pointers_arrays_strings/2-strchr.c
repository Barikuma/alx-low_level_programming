#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to locate a character in
 * @c: the character to locate
 * Return: c if character is found ot NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	int i, j;


	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			for (j = 0 ; j != '\0' ; j++)
			{
				s[j] = s[i];
			}
			return (s);
		}
	}
	return (NULL);

}
