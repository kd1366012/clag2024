#include<stdio.h>
main() {
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 };
	double* pd = data;
	double gokei,i;
	printf("�z��̓��e\n");
	printf("�z��data[]= ");
	for (gokei = 0, i = 0; i < 5;i++) {
		gokei += *pd;
		pd++;
		printf("%f", *pd);
		

	}
	
	printf("\n���v=%.3f",gokei);
	printf("\n����=%.3f",gokei / 5.0);

}