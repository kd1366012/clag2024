#include<stdio.h>
int main(void) {
	int number;
	printf("����:");
	scanf("%d",&number);
	if (number % 2 == 0) {
		printf("���̐��́u�����v�ł�");
	}
	else {
		printf("���̐��́u��v�ł�");
	}
	return 0;
}