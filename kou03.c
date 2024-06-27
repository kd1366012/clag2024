#include<stdio.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
int main(void) {
	struct fruit data[3] = {"peach",300,5,3,0}, {"grape",200,4,10,0}, {"watemelon",1500,5,8,0};
	int i, gokei = 0;
	for (i = 0; i < 3;i++) {
		printf("¤•i–¼:%s\t\t",data[i].name);
		printf("\n‰¿Ši:%d\t\t",data[i].price);
		printf("\nŒÂ”:%d\t\t",data[i].number);
		printf("‚¨Š©‚ß“x\t");
		for (int p = 0; p < data[i].point;p++) {
			printf("™");
		}
		printf("\n‹àŠz:%d\t\t",data[i].price * data[i].number);
		gokei = data[i].price * data[i].number;
	}
	printf("‡Œv‹àŠz = %d",gokei);

}