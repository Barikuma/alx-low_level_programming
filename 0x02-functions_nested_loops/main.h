#include <stdio.h>
/*Function to print alphabets in lowercases using putchar()*/
void print_alphabet(void)
{
	int i;

	for (i = 97 ; i < 123 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
