#include<stdio.h>
main() {
	double a, b;
	double* pa = &a, * pq = &b;
	printf("実数値１？");
	scanf("%lf",pa);
	printf("実数値２？");
	scanf("%lf",pq);
	if (*pa > *pq) {
		printf("大きいほう=%f", *pa);
	}
	else if (*pq > *pa) {
		printf("大きいほう=%f",*pq);
	}
}