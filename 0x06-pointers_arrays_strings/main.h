#ifndef MAIN_H
#define MAIN_H
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
int _strlen(char *s)
{
	int i = 0, len = 0;
	
	while (s[i] != '\0')
	{
		i++;
		len++;
	}	
	return (len);
}
#endif
