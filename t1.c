#include<stdio.h>
main() {
	int bim, t,s;
	printf("�g�������\n");
	scanf("%d",&s);
	printf("�̏d�����\n");
	scanf("%d",&t);
	bim = t / s * s;
	if (bim<=18) {
		printf("��̏d");
	}
	else if (bim<=25) {
		printf("���ʑ̏d");
	}
	else if (bim<=30) {
		printf("�얞�P");
	}
	else if (bim<=35) {
		printf("�얞�Q");
	}
	else if (bim<=40) {
		printf("�얞�R");
	}
	else {
		printf("�얞�S");
	}
}