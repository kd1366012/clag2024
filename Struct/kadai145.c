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
	int i, gokei = 0;
	for (i = 0; i < 3;i++) {
		printf("���i��:\t\t%s\n",data[i].name);
		printf("���i:\t\t%d\t\n",data[i].price);
		printf("��:\t\t%d\n",data[i].number);
		printf("�����ߓx:\t");
		for (int cnt = 0; cnt < data[i].point;cnt++) {
			printf("��");
		}
		printf("\n");
		printf("���z:%d\n", data[i].price * data[i].number);
		gokei += data[i].price * data[i].number;

	}
	printf("\n���v���z=%d",gokei);
	return 0;



}