#include<stdio.h>
long bekijyou(long a, long b);
int main() {
	long a, b,kotae;
	printf("数値1:");
	scanf("%ld",&a);
	printf("数値２");
	scanf("%ld",&b);
	kotae = bekijyou(a,b);
	printf("%ldの%ld乗は%ldです",a,b,kotae);
}
long bekijyou(long a, long b) {
	long ans = 1;
	for (int i = 0; i < b; i++) {
		ans = ans * a;
	}
	return ans;
}

