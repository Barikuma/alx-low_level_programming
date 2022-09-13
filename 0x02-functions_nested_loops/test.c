#include <stdio.h>
#include <ctype.h>

int _islower(int c);

int main(void)
{
	int r;

	printf("%d\n", _islower(120));

	return 0;
}

int _islower(int c)
{
	if (islower(c)){
		return (1);
	}
	return (0);
}
