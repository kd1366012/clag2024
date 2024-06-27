#include<stdio.h>
main() {
	float sum;
	float  c[2][3];
	int i, cnt;
	sum = 0;
	for (i = 0; i <= 3;i++) {
		for (cnt = 0; cnt <= 1;cnt++) {
			printf("c[%d][%d]=",i,cnt);
			scanf("%f",&c[i][cnt]);
			sum += c[i][cnt];



		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n",i,sum/2);




	}

}