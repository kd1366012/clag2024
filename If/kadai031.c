#include<stdio.h>
int main(void) {
	float n, v;
	printf("2‚Â‚ÌŽÀ”’l‚ð“ü—Í:");
	scanf("%f %f",&n,&v);
	if (n > v) {
		printf("‘å‚«‚¢•û=%f",n);
	}
	else if (v > n) {
		printf("‘å‚«‚¢•û=%f",v);

	}
	return 0;
}