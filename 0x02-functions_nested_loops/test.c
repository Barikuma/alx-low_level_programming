#include <stdio.h>
#include <limits.h>

void num(int n){
	if (n >= 0 && n <= 98){
		for (n = n ; n <= 98 ; n++){
			if (n < 10){
				putchar('0' + n);
			}
			else{
				putchar('0' + n / 10);
				putchar('0' + n % 10);
			}
			if ( n != 98){
				putchar(',');
				putchar(' ');
			}
		}
	}
	else if (n > 98){
		for (n = n ; n >=98 ; n--){
			if (n < 100){
				putchar('0' + n / 10);
				putchar('0' + n % 10);
			}
			else{
				int h = n % 100;
				putchar('0' + n / 100);
				putchar('0' + h / 10);
				putchar('0' + h % 10);
			}

			if(n != 98){
				putchar(',');
				putchar(' ');
			}
		}
	}
	else{
		for (n = n ; n <= 98 ; n++){
			if ((n < 0) && (n > -10)){
				putchar('-');
				putchar('0' + n * -1);
			}
			else if (n >= 10){
				putchar('0' + n / 10);
				putchar('0' + n % 10);
			}
			else {
				putchar('0' + n);
			}


			if (n != 98){
				putchar(',');
				putchar(' ');
			}
		}
	}


		putchar('\n');
}

int main(void){
	num(-9);
	/*putchar('-');
	putchar('0' + 20 / 10);
	putchar('0' + 20 % 10);
	putchar('\n');
	*/
	return 0;
}
