#include "main.h"

/**
 * rot13 - encodes string with rot13 cipher
 * @str: string to encode
 * Return: str
 */

char *rot13(char *str)
{
	int i;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_13[] = "nmopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = str;

	while (*str)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == alph[i])
			{
				*str = rot_13[i];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
