#include<stdio.h>
main() {
	double a, b;
	double* pa = &a, * pq = &b;
	printf("ŽÀ”’l‚PH");
	scanf("%lf",pa);
	printf("ŽÀ”’l‚QH");
	scanf("%lf",pq);
	if (*pa > *pq) {
		printf("‘å‚«‚¢‚Ù‚¤=%f", *pa);
	}
	else if (*pq > *pa) {
		printf("‘å‚«‚¢‚Ù‚¤=%f",*pq);
	}
}