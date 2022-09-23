#include "main.h"
#include <stdio.h>

int main(void)
{
	char s1[] = "hello ";
	char s2[] = "world\n";

	_strncat(s1, s2, 4);

	return 0;
}
