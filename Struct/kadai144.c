#include<stdio.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
int main(void) {
	struct fruit data = {"peach",300,5,3,0};
	struct fruit* p = &data;
	printf("���i��:%s\n",p->name);
	printf("���i:%d\n", p->price);
	printf("�������ߓx:%d\n",p->point);
	printf("\n��:%d\n",p->number);
	printf("���z:%d\n",p->price * p->number);

	return 0;


}