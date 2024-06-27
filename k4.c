#include<stdio.h>
long bekijiyou(long a,long b);
int main() {
	long a = 0, b = 0, kotae = 0;
	printf("”’l1:");
	scanf("%ld",&a);
	printf("”’l2:");
	scanf("%ld",&b);
	kotae = bekijiyou(a,b);
	printf("%ld‚Ì%ldæ‚Í%ld‚Å‚·",a,b,kotae);

}

long bekijiyou(long a, long b) {
	long ans = 1;
	for (int i = 0; i < b;i++) {
		ans *= a;
		
	}
	return ans;
}