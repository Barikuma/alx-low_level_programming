#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int _strlen(char *s);
/**
 * _strdup - copies a string from a parameter to a pointer
 * @str: string to be copied
 *
 * Return: NULL if str is NULL or if space is insufficient else the pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	ptr = malloc(_strlen(str) + 1);

	if (ptr == NULL || str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);

}

/**
 * _strlen - calculates the length of a string
 * @s: string's length to be calculated
 *
 * Return: lenght
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s++) != '\0')
		len++;
	return (len);
}
