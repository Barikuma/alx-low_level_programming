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
	unsigned int i = 0, j, a_len = 0;

	while (accept[a_len] != '\0')
		a_len++;

	while (a_len > 0)
	{

		for (j = 0 ; j < a_len ; j++)
		{
			if (accept[i] == s[j])
			{
				count++;
				break;
			}
		}
		i++;
		a_len--;
	}
	return (count);
}
