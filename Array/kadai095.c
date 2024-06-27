#include<stdio.h>
main() {
	int a[10] = {10,20,30,40,50,60,70,80,90,100};
	int b[10] = {100,200,300,400,500,600,700,800,900,1000 };
	int i, cnt,gokei;


	for (gokei = 0, i = 0; i <= 9; i++) {
		printf("%d\n",a[i]);
		gokei += a[i];
	}
	printf("‡Œv=%d",gokei);
	printf("•½‹Ï=%d",gokei/10);

	for (gokei = 0, cnt = 0; cnt <= 9; cnt++) {
		printf("%d\n",b[cnt]);
		gokei += b[cnt];
	}
	printf("‡Œv=%d",gokei);
	printf("•½‹Ï=%d",gokei/10);



}