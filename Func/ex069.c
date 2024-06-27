#include<stdio.h>
main() {
	int cnt,sum=0,num;
	printf("®”:");
	for (cnt = 0; scanf("%d", &num) != EOF;cnt++) {
		sum += num;
		printf("®”:");
	}
	printf("‡Œv=%d",sum);
	printf("•½‹Ï=%.2f",(float)sum/cnt);
	

}