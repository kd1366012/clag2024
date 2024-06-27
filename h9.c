#include<stdio.h>
main() {
	float x[3][2],avg;
	int i, cnt;
	for (i = 0; i <= 2;i++) {
		for (avg = 0,cnt = 0; cnt <= 1;cnt++) {
			printf("x[%d][%d]=",i,cnt);
			scanf("%f",&x[i][cnt]);
			avg += x[i][cnt];

		}



		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n",i,avg/2);
	}
}