#include <stdio.h>

int main(void)
{
	int a = 5, b = 3 , c = 2;

	if (a > (b && c))
		printf("A");
	else
		printf("wrong");

	return 0;
}
