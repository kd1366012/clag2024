#include<stdio.h>
int main(void) {
	int gokei = 0,cnt=0,num;
	do {
		printf("����(-999)�ŏI��:");
		scanf("%d",&num);
		gokei += num;
		cnt++;






	} while (num != -999);

	printf("���v=%d\n",gokei);
	printf("����=%f",(float)gokei / 3);
}