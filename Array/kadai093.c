#include<stdio.h>
int main(void) {
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = {100,200,300,400,500,600,700,800,900,1000};
	int c[10];
	int i;
	printf("配列aと配列bの加算結果を配列cに加算する\n");
	//aの表示
	printf("配列a=");
	for (i = 0; i < 10;i++) {
		printf("%d",a[i]);
	}
	//bの表示
	printf("\n配列b=");
	for (i = 0; i < 10;i++) {
		printf("%d",b[i]);
	}
	//c = a + b
	printf("\n配列c=");
	for (i = 0; i < 10;i++) {
		c[i] = a[i] + b[i];
		printf("%d",c[i]);
	}
	return 0;
}