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
	printf("¤•i–¼:%s\n",p->name);
	printf("‰¿Ši:%d\n", p->price);
	printf("‚¨‚·‚·‚ß“x:%d\n",p->point);
	printf("\nŒÂ”:%d\n",p->number);
	printf("‹àŠz:%d\n",p->price * p->number);

	return 0;


}