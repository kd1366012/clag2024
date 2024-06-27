#include<stdio.h>
int main(void) {
	int number;
	printf("整数:");
	scanf("%d",&number);
	if (number % 2 == 0) {
		printf("その数は「偶数」です");
	}
	else {
		printf("その数は「奇数」です");
	}
	return 0;
}