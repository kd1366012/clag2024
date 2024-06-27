#include<stdio.h>
int comparison(int, int);
main() {
	int a, b,max=0;
	printf("‚Q‚Â‚Ì®”?:");
	scanf("%d%d",&a,&b);
	max = comparison(a,b);
	printf("max=%d",max);

}
int comparison(int d1, int d2) {
	int kotae=0;
	if (d1 > d2) {
		kotae = d1;
	}
	else if (d2 > d1) {
		kotae = d2;
	}
	return kotae;
}