#include<stdio.h>
main() {
	int p = 5, x = 9,temp;
	temp = p;
	p = x;
	x =  temp;
	printf("p=%d",p);
	printf("\nx=%d",x);
}