#include<stdio.h>
main() {
	double a, b;
	double* pa = &a, * pq = &b;
	printf("�����l�P�H");
	scanf("%lf",pa);
	printf("�����l�Q�H");
	scanf("%lf",pq);
	if (*pa > *pq) {
		printf("�傫���ق�=%f", *pa);
	}
	else if (*pq > *pa) {
		printf("�傫���ق�=%f",*pq);
	}
}