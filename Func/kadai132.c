#include<stdio.h>
main() {
	int cnt, gokei,num;
	printf("����(^z�ŏI��)");
	for (gokei = 0,cnt = 0; scanf("%d", &num) != EOF;cnt++) {
		gokei += num;
		printf("����(^z�ŏI��)");

	}
	printf("���v=%d",gokei);
	printf("����=%.1f",(float)gokei/cnt);
}