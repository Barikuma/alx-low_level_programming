#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - concatenates s1 with s2 for a number of n bytes
 * @s1: string to append
 * @s2: string to concatenate with
 * @n: number of bytes to copy
 * Return: address of the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, i, j, t_len;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	t_len = s1_len + n + 1;

	str = malloc(sizeof(*str) * t_len);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[i++] = s2[j];

	str[t_len] = '\0';

	return (str);
}
