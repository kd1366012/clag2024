#include<stdio.h>
int main(void) {
	int num;
	printf("����?:");
	scanf("%d", &num);
	if (num < 0) {
		printf("���͒l�̓}�C�i�X�ł�");

	}
	else if(num > 0) {
		printf("���͒l�̓v���X�ł�");
	}
	else {
		printf("0�ł�");
	}
	return 0;
}