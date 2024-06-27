#include<stdio.h>
main() {
	int b[5][5] = { {3,6,9,12,15},{18,21,24,27,30},{33,36,39,42,45},{48,51,54,57,60},{63,66,69,72,75} };
	int i, cnt,c[5][5];
	printf("”z—ñ‚ƒ‚Ì“à—e\n");
	for (i = 0; i <= 4;i++) {
		for (cnt = 0; cnt <= 4;cnt++) {
			c[i][cnt] = b[i][cnt];
			printf("%d ",c[i][cnt]);
		}
		printf("\n");
	}


		
}