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
	int i = 0, alen = 0;

	while (accept[alen] != '\0')
		alen++;

	while (alen > 0)
	{
		int j;

		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		i++;
		alen--;
	}
	return (count);
}
