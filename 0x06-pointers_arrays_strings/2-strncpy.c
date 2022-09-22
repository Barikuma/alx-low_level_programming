#include "main.h"

/**
 * _strncpy - this function copies a string
 * @dest: destination to copy to
 * @src: string to copy from
 * @n: number of bytes to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	
	for (; i < n ; i++)
		dest[i] = '\0';

	return (dest);
}
