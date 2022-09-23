#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the string to be concatenated with
 * @src: the string to be appended with
 * @n: the number of byte to concatenate
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, d_len;

	while (*dest++ != '\0')
		dlen++;

	while (i < n && src[i] != '\0')
	{
		dest[dlen] = src[i];
		i++;
	}
	return (dest);
}
