#include <stdio.h>

int main(void){
	int i;

	for (i = 97 ; i < 107 ; i++){
		if (((char)i) == 'b'){
			continue;
		}
		else {
			putchar(i);
		}
	}
	
	return 0;
}
