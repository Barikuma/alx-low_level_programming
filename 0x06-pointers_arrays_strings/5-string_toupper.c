#include "main.h"

/**
 * string_toupper - changes all lowercase characters of a string to uppercase
 * @str: string to change
 * Return: str
 */

char *string_toupper(char *str)
{
	int i = 0, len = _strlen(str);
	while (i < len)
	{
		if (str[i] >= 65 && str[i] <= 90)
			continue;
		else
			str[i++] = str[i] - 32;
	}
	return (str);
}
