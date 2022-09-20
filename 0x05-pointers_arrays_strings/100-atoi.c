#include <stdio.h>

/**
 * _atoi - a function that converts string to integer
 * @s: An input string
 * Return: integer from conversion
 */

int _atoi(char *s)
{
	unsigned int t = 0;
	int sg = 1;
	char nf = 0;

	while (*s)
	{
		if (*s == '-')
			sg *= -1;
		if (*s >= '0' && *s <= '9')
		{
			nf = 1;
			t = total * 10 + *s - '0';
		}
		else if (nf)
			break;
		s++;
	}
	if (sg < 0)
		t = (-t);
	return (t);
}
