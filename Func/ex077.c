#include<stdio.h>
void calculation(int *max, int *min,int n1,int n2,int n3);
main() {
	int v1, v2, v3,max,min;
	printf("®”‚ð‚R‚Â“ü—Í:");
	scanf("%d%d%d",&v1,&v2,&v3);
	calculation(v1,v2,v3,&max,&min);
	printf("Å‘å’l=%d,	Å¬’l=%d",max,min);
}

void calculation(int *max int *min,int n1,int n2,int n3) {
	*max = n1;

	if (n2 > *max) { *max = n2; }
	if (n3>*max) { *max = n3; }
	*min = n1;
	if (n2<*min) { *min = n2; }
	if (n3<*min) { *min = n3; }
	return;
}