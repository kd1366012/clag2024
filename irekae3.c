#include<stdio.h>
main() {
	int p = 21, r = 2, temp = 0;
	temp = p;
	p = r;
	r = temp;
	printf("p=%d\nr=%d",p,r);

}