#include<stdio.h>
main() {
	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int i, cnt;
	for (i = 0; i <= 4; i++) {
		for (cnt = 0; cnt <= 4; cnt++) {
			printf("%d ", a[i][cnt]);


		}

		printf("\n");
	}

}
