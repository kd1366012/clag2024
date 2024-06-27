#include<stdio.h>
main() {
	int cnt, gokei,num;
	printf("®”(^z‚ÅI—¹)");
	for (gokei = 0,cnt = 0; scanf("%d", &num) != EOF;cnt++) {
		gokei += num;
		printf("®”(^z‚ÅI—¹)");

	}
	printf("‡Œv=%d",gokei);
	printf("•½‹Ï=%.1f",(float)gokei/cnt);
}