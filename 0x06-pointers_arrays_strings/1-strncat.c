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

	while ((i < n) && (scr[i] != '\0'))
		dest[dlen++] = src[i++];
	dest[dlen + i] = '\0';

	return (dest);
}
