#include<stdio.h>
main() {
	int cnt,sum=0,num;
	printf("����:");
	for (cnt = 0; scanf("%d", &num) != EOF;cnt++) {
		sum += num;
		printf("����:");
	}
	printf("���v=%d",sum);
	printf("����=%.2f",(float)sum/cnt);
	

}