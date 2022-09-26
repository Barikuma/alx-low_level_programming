#include "main.h"
#include <stdio.h>

int main(void)
{
	char buffer[98];
	int i;

	for (i = 0 ; i < 95 ; i++)
	{
		buffer[i] = "0x%02x", i;

	printf("%s\n", buffer);
}
