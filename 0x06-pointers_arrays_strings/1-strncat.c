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
	int dest_len, i;
	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = src[i];

	return (dest);
}
