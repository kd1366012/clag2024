#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};
int main(void) {
	struct syohin_data syohin[3] = { {"エンピツ",30,5},
								  {"消しゴム",50,2},
								  {"フデバコ",500,3} };
	
	struct syohin_data* p = &syohin[0];
	int i;
	for (i = 0; i < 3;i++) {
		printf("商品名:%s\t",(p+i)->name);
		printf("単価:%4d\t", (p+i)->tanka);
		printf("個数:%4d\n", (p+i)->kosuu);
		printf("金額: \ %d\n",(p+i)->tanka * p->kosuu);


	}
	return 0;

}