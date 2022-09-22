#include "main.h"

/**
 * cap_string - capitalizes the words of a string
 * @str: string to capitalize words
 * Return: str
 */

char *cap_string(char *str)
{
	int len = _strlen(str), i = 0;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'}

	while (i < len)
	{
		int j = 0;
		for (; j < 13 ; j++)
		{
			if (str[i] == seperators[j])
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
