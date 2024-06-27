#include<stdio.h>
main() {
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* pa;
	int i;

	pa = data;
	printf("ポインタを固定で表示\n配列data[]=");
	for (i = 0; *(pa + i) != -999;i++) {
		printf("%d",*(pa+i));
	}















	printf("\nポインタを変化させて表示\n配列data[]=");
	for (i = 0; i <= 7;i++) {			//for(pa=data;*(pa)!=-999;pa++)
		printf("%d",*pa);
		pa++;

	}

}