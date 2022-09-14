#include <stdio.h>
#include <limits.h>

void num(){
	int i, j, rslt;
	for (i = 0 ; i <= 9 ; i++){
		for (j = 0 ; j <= 9; j++){
			rslt = i * j;
			if (rslt >= 10){
				putchar('0' + rslt / 10);
				putchar('0' + rslt % 10);
			}
			else
			{
				putchar('0' + rslt);
			}
			if (j != 9){
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}	
}
int main(void){
	num();
	return (0);

}
