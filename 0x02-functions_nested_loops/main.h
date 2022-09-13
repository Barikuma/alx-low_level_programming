#include <stdio.h>
#include <ctype.h>
/*Function to print alphabets in lowercases using putchar()*/
void pchar(void)
{
	printf("_putchar\n");
}

void print_alphabet(void)
{
	int i;
	
	/*initialize i = 97 which is the decimal equivalent of a and run while i <= 122 which is the decimal equivalent of z and increment by 1*/
	for (i = 97 ; i < 123 ; i++)
	{
		/*display the character value of i*/
		putchar(i);
	}
	/*display new line*/
	putchar('\n');
}

void print_alphabet_x10(void)
{
	int i = 1, j;

	/*loop for 10 times*/
	while (i <= 10)
	{
		/*initialize j = 97 which is the decimal equivalent of a*/
		j = 97;

		/*check if j <= 122 which is the decimal equivalent of z*/
		while (j <= 122)
		{
			/*display the character equivalent to the value of j*/
			putchar(j);

			/*increment j by 1*/
			j++;
		}
		/*display a new line*/
		putchar('\n');

		/*increment i by 1*/
		i++;
	}
}

int _islower(int c)
{
	/*checks if see is between 97 and 122 (decimal equivalents of alphabets a - z)*/
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
