#include<stdio.h>
main() {
	int a[][3] = { { 10,20,30 }, { 1,2,3 } };
	int i, cnt, gokei;
	for (i = 0; i <= 1;i++) {
		for (gokei = 0, cnt = 0; cnt <= 2;cnt++) {
			printf("a[%d][%d]=\n",i,cnt,a[i][cnt]);
			gokei = gokei + a[i][cnt];



		}


	}
	printf("%d�s�ڂ̍��v=%d\n",i,gokei);


}

