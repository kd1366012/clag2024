#include<stdio.h>
main() {
	int a = 5, b = 3, work = 0;
	work = a;
	a = b;
	b = work;
	printf("a=%d\nb=%d\n",a,b);
}