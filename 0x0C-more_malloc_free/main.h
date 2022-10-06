#ifndef MAIN_H
#define MAIN_H
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);

*int _strlen(char *s)
{
	int len = 0;
	
	while (*(s++) != '\0')
		len++;
	return (len);
}
#endif
