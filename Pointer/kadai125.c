#include<stdio.h>
main() {
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* pa;
	int i;

	pa = data;
	printf("�|�C���^���Œ�ŕ\��\n�z��data[]=");
	for (i = 0; *(pa + i) != -999;i++) {
		printf("%d",*(pa+i));
	}















	printf("\n�|�C���^��ω������ĕ\��\n�z��data[]=");
	for (i = 0; i <= 7;i++) {			//for(pa=data;*(pa)!=-999;pa++)
		printf("%d",*pa);
		pa++;

	}

}