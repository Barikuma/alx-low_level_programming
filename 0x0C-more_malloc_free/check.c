#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(void)
{
	int *ptr, i;

	for (i = 0; i < 5; i++)
	{
		ptr = malloc(sizeof(int) * 1);
		if (ptr == NULL)
		{
			printf("Null\n");
			return (-1);
		}
		ptr++;
	}
	for (i = 0; i < 5; i++)
	{
		*(ptr + i) = 0;
	}

	for (i = 0; i < 5; i++)
		printf("%d\n", *(ptr++));

	for (i = 0; i < 5; i++)
		free(ptr++);

	return (0);
}
