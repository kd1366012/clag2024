#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};
void display3(struct syohin_data *syo);

main() {
	struct syohin_data syo = { "Á‚µƒSƒ€",50 };
	display3(&syo);
}

void display3(struct syohin_data *syo) {
	printf("%s %d\n",
		syo->name, syo->tanka);
}