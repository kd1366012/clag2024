#include<stdio.h>
#define G 2
#define R 3
int main(void) {
	int a[2][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	int b[2][3];
	int i, j;
	for (i = 0; i < G;i++) {
		for (j = 0; j < R;j++) {
			b[i][j] = a[i][j];
		}
	}

	//�R�s�[�����z�����ʂɕ\��
	printf("b[2][3]\n");
	for (i = 0; i < G;i++) {
		for (j = 0; j < R;j++) {
			printf("%3d",b[i][j]);
		}
		printf("\n");
	}

	return 0;
}