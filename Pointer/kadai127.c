#include<stdio.h>
main() {
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 };
	double* pd = data;
	double gokei,i;
	printf("配列の内容\n");
	printf("配列data[]= ");
	for (gokei = 0, i = 0; i < 5;i++) {
		gokei += *pd;
		pd++;
		printf("%f", *pd);
		

	}
	
	printf("\n合計=%.3f",gokei);
	printf("\n平均=%.3f",gokei / 5.0);

}