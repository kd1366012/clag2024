#include<stdio.h>
int main(void) {
	float n, v;
	printf("2�̎����l�����:");
	scanf("%f %f",&n,&v);
	if (n > v) {
		printf("�傫����=%f",n);
	}
	else if (v > n) {
		printf("�傫����=%f",v);

	}
	return 0;
}