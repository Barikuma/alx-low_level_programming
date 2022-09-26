#include <stdio.h>

char *cap_string(char *str);

int main(void)
{
	char s1[] = "hello it is Me";

	printf("%s\n", cap_string(s1));

	return 0;
}

char *cap_string(char *str)
{
	int i = 0, len = 0, j = 0;

	while (str[j] != '\0')
	{
		len++;
		j++;
	}
	
	while (i < len && str[i] != '\0')
	{
		if (str[i] == ' ')
			str[i + 1] = str[i + 1] - 32;
		i++;
	}

	return str;
}
