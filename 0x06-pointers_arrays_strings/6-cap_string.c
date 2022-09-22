#include "main.h"

/**
 * cap_string - capitalizes the words of a string
 * @str: string to capitalize words
 * Return: str
 */

char *cap_string(char *str)
{
	int len = _strlen(str), i = 0;

	while (i < len)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] = '\n' || str[i] = ','
				|| str[i] = ';' || str[i] == '.' || str[i] == '!' || str[i] == '?'
				|| str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{'
				|| str[i] == '}')
		{
			str[i] = str[++i] - 32;
		}
	}
	return (str);
}
