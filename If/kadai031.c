#include<stdio.h>
int main(void) {
	float n, v;
	printf("2つの実数値を入力:");
	scanf("%f %f",&n,&v);
	if (n > v) {
		printf("大きい方=%f",n);
	}
	else if (v > n) {
		printf("大きい方=%f",v);

	}
	return 0;
}