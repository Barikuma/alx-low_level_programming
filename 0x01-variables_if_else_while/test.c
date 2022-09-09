#include <stdio.h>

int main(void){
	int i,j,ch,decimal,count;
	int temp;

	int hex[10], number[10];

	i=0;
    	count=0;
	decimal=0;
	ch = 0;

	decimal = decimal * 10;
	decimal = decimal + (ch - '0');
	 while(decimal != 0) {
		hex[i] = decimal%16;
	     	decimal= decimal/16;
		printf("remainder is %d\n",hex[i]);
		printf("after divided is %d\n",decimal);
		i++;
	        count++;
  	}
          	
	 i=i-1;		
	 for(j=0; j < count; j++)
	 {
		 number[j]=hex[i];
		 i--;
	 }	
	 for(j=0; j < count; j++)
	 {
		 putchar(number[j]);
	 } 
	 putchar('\n');
	
	return 0;
}
