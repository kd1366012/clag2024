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
		printf("���i��:%s\t\t",data[i].name);
		printf("\n���i:%d\t\t",data[i].price);
		printf("\n��:%d\t\t",data[i].number);
		printf("�����ߓx\t");
		for (int p = 0; p < data[i].point;p++) {
			printf("��");
		}
		printf("\n���z:%d\t\t",data[i].price * data[i].number);
		gokei = data[i].price * data[i].number;
	}
	printf("���v���z = %d",gokei);

}