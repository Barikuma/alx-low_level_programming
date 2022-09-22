#include "main.h"

/**
 * leet - encodes letters a, e, o, t, l
 * @str: string to encode letters
 * Return: str
 */

char *leet(char *str)
{
	int i = 0, j;
	char c_char[10] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'},
	     c_digits[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (str[i])
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (str[i] == c_char[j])
				str[i] = c_digits[j];
		}
		i++;
	}
	return (str);
}
