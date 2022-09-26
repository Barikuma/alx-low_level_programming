#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search through
 * @accept: the string you wish to find
 * Return: the length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		int j;

		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (accept[j] == s[i])
				count++;
			else
				break;
		}
		i++;
	}
	return (count);
}
