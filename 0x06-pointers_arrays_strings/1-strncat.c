#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the string to be concatenated with
 * @src: the string to be appended with
 * @n: the number of byte to concatenate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dlen;

	dlen = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dlen + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
