#include "main.h"

void rev_rec(char *c);

int main(void)
{
	rev_rec("Hello");
	return(0);
}

void rev_rec(char *c)
{
	int len = _strlen(c);
	char s;

	if (len <= 0)
	{
		_putchar('\n');
		return;
	}
	len--;
	s = *(c + len);
	_putchar(s);
	rev_rec((c + 1));
}
