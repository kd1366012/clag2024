#include<stdio.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};


int main(void) {
	struct fruit data[3] = { {"peach",300,5,3,0},{"grape",200,4,10,0},{"watermelon",1500,5,8,0} };
	struct fruit* p = data;
	int i, gokei = 0;
	for (i = 0; i < 3;i++) {
		printf("¤•i–¼:\t\t%s\n",(p+i)->name);
		printf("‰¿Ši:\t\t%d\t\n",(p+i)->price);
		printf("ŒÂ”:\t\t%d\n",(p+i)->number);
		printf("‚¨Š©‚ß“x:%d\t",(p+i)->point);
		printf("\n");
		printf("‹àŠz:%d\n", (p+i)->price * (p+i)->number);
		gokei += (p+i)->price * (p+i)->number;

	}
	printf("\n‡Œv‹àŠz=%d",gokei);
	return 0;



}