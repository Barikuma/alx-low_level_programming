#include "main.h"

/**
 * string_toupper - changes all lowercase characters of a string to uppercase
 * @str: string to change
 * Return: str
 */

char *string_toupper(char *str)
{
	int i = 0, len = _strlen(str);

	while (*str)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] + 32;
		i++, str++;
	}
	return (str);
}
