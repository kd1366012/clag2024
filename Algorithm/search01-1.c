#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int s, i, d[10];
	printf("�T���l�������:");
	scanf("%dh",&s);
	for (i = 0; i < 10;i++) {
		d[i] = rand() % 100 + 1;
		printf("i=%d\n",i);
		if (s == d[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("%d�ԖڂɌ�������\n",i);
	}


}