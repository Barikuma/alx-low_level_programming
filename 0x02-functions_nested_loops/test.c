#include <stdio.h>

int main(void)
{
	int h = 0, m;

	while (h < 23){
		m = 0;
		while(m <= 59){
			if (m < 10 && h < 10){
				putchar('0' + 0);
				putchar('0' + h);
				putchar(':');
				putchar('0' + 0);
				putchar('0' + m);
			}
			else if ((m >= 10) && (h < 10)){
				putchar('0' + 0);
				putchar('0' + h);
				putchar(':');
				putchar('0' + m / 10);
				putchar('0' + m % 10);
			}
			else if ((m < 10) && (h >= 10)){
				putchar('0' + h / 10);
				putchar('0' + h % 10);
				putchar(':');
				putchar('0' + 0);
				putchar('0' + m);
			}
			else{
				putchar('0' + h / 10);
				putchar('0' + h % 10);
				putchar(':');
				putchar('0' + m / 10);
				putchar('0' + m % 10);
			}
			m++;
			putchar('\n');
		}

		h++;
	}
}
