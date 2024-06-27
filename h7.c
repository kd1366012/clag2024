#include<stdio.h>
main() {
	float x[3][2],sum;
	int i, j;
	for (i = 0; i <= 2;i++) {
		for (sum = 0, j = 0; j <= 1;j++) {
			printf("x[%d][%d]=",i,j);
			scanf("%f",&x[i][j]);
			sum = sum + x[i][j];







		}
		printf("%ds–Ú‚Ì‡Œv=%.2f\n",i,sum / 2);
	}
}