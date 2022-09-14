#include <stdio.h>

int _abs(int);

int main(void){
	_abs(-12);
	putchar('\n');
}

int _abs(int x){
	if ((x <= 0) && (x > -10)){
		putchar('0' - x);
	}
	else{
		putchar('0' - x/10);
		putchar('0' - x%10);
	}
	if ((x > 0) && (x < 10)){
		putchar('0' + x);
	}
	else if (x >= 10){
		putchar('0' + x/10);
		putchar('0' + x%10);
	}
}
