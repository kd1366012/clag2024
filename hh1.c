#include<stdio.h>
#define G 2
#define R 3
int main(void) {
	int a[3][3] = { {1,2,3},{4,5,6} };
	int i, j;
	for (i = 0; i < G;i++) {
		for (j = 0; j < R;j++) {
			a[i][j] += a[i][j];
		}
	}

	//‰æ–Ê‚É•\Ž¦
	for (i = 0; i < G; i++) {
		for (j = 0; j < R; j++) {
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}