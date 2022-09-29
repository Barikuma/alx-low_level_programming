#include "main.h"

/**
 * is_palindrome - checks if a string is a palinndrome
 * @s: the string to check
 * Return: 1 if string is a palindrome, otherwise 0
 */

int *_len(char *s);

int is_palindrome(char *s)
{
	int **len = &_len(s);
	
	if (*s == '\0')
		return (0);
	**len--;
	if (*s == *(s + **len))
	{
		return (0 + is_palindrome((s + 1)));
	}
	return (1);
}

int *_len(char *s)
{
	int len = 0, *l_ptr;
	l_ptr = &len;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (l_ptr);
}
