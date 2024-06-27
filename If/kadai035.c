#include<stdio.h>
int main(void) {
	int num;
	printf("整数?:");
	scanf("%d", &num);
	if (num < 0) {
		printf("入力値はマイナスです");

	}
	else if(num > 0) {
		printf("入力値はプラスです");
	}
	else {
		printf("0です");
	}
	return 0;
}