#include<stdio.h>
main() {
	int c[][3] = { {30,10,50},{1,2,3} };
	int i, cnt,sum;
	for (i = 0; i <= 1;i++) {
		for (sum = 0, cnt = 0; cnt < 3; cnt++) {
			printf("a[%d][%d]=%d\n",i,cnt,c[i][cnt]);
			sum += c[i][cnt];


		}
		printf("%ds–Ú‚Ì‡Œv=%d\n", i, sum);

	}

}