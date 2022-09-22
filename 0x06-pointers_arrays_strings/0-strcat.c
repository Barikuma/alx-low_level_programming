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
	int i = 0, dlen, slen, f_len;

	dlen = _strlen(dest);
	slen = _strlen(src);
	f_len = dlen + slen;
	dest[dlen] = ' ';

	while (dlen < f_len)
		dest[dlen++] = src[i++];

	return (dest);
}

