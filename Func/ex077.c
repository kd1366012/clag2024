#include<stdio.h>
void calculation(int *max, int *min,int n1,int n2,int n3);
main() {
	int v1, v2, v3,max,min;
	printf("整数を３つ入力:");
	scanf("%d%d%d",&v1,&v2,&v3);
	calculation(v1,v2,v3,&max,&min);
	printf("最大値=%d,	最小値=%d",max,min);
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