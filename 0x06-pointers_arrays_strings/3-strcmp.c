#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal, < 0 if s1 < s2 and > 0 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, sum1 = 0, sum2 = 0;

	int len = _strlen(s1);

	for (; i < len ; i++)
	{
		if (s1[i] > s2[i])
			sum1 += s1[i];
		else if (s1[i] < s2[i])
			sum2 += s2[i];
		else
		{
			sum1 += s1[i];
			sum2 += s2[i];
		}
	}
	if (sum1 > sum2)
		return (15);
	if (sum1 < sum2)
		return (-15);
	return (0);
}
