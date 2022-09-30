#include "main.h"

/**
 * _strncat - concatenates a number of characters with a string
 * @dest: the string to be concatenated with
 * @src: the string to append from
 * @n: the number of characters to append
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len;

	len = _strlen(dest);

	for (; i < n && src[i] != '\0' ; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';

	return (dest);
}
