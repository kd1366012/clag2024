#include<stdio.h>
long bekijyou(long a, long b);
int main() {
	long a, b,kotae;
	printf("���l1:");
	scanf("%ld",&a);
	printf("���l�Q");
	scanf("%ld",&b);
	kotae = bekijyou(a,b);
	printf("%ld��%ld���%ld�ł�",a,b,kotae);
}
long bekijyou(long a, long b) {
	long ans = 1;
	for (int i = 0; i < b; i++) {
		ans = ans * a;
	}
	return ans;
}

