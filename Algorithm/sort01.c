#include<stdio.h>
main() {
	int d[5] = { 30,7,25,16,10 };
	int i = 0, j = 0;
	int temp;
	for (i = 0; i < 4;i++) {
		for (j = i + 1; j < 5;j++) {
			if (d[i]>d[j]) { //�����\�[�g�i<�ɂ���ƍ~���j
				temp = d[i];
				d[i] = d[j];
				d[j] = temp;




			}
		}
	}
	printf("�\�[�g��\n");
	for (i = 0; i < 5;i++) {
		printf("%d ",d[i]);
	}

}