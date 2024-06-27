#include<stdio.h>
void keisan(int *pa, int *bp);
main() {
	int a = 10, b = 20;
	printf("実行前の値");
	printf("a=%d	b=%d",a,b);
	keisan(&a,&b);
	printf("\n実行後の値");
	printf("a=%d	b=%d",a,b);
}
void keisan(int *pa, int *pb) {
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	return;
}