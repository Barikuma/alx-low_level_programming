#include "main.h"

/**
 * _strcat - this function concatenates strings
 * @dest: the string to be concatenated with
 * @src: the string to be appended
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dlen;

	dlen = _strlen(dest);

	while (src[i] != '\0')
		dest[dlen++] = src[i++];

	return (dest);
}

