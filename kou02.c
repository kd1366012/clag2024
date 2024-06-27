#include<stdio.h>

struct test {
	char name[32];
	int kokugo;
	int sansu;
	int eigo;
};

struct test student[3] = {
	{"‘¾˜Y",40,50,60},
	{"“ñ˜Q",55,65,70},
	{"O˜Y",70,80,90}

};
void show(void);
void line(void);


int main(void) {
	printf("%10s %10s %10s %10s\n", "–¼‘O", "‘Œê", "Z”", "‰pŒê");
	line();
	show();
	line();
	return;

}







void line(void) {
	int i;
	for (i = 0; i < 50;i++) {
		printf("-");
	}
	printf("\n");
	return;

}

void show(void) {
	int i;
	for (i = 0; i < 3;i++) {
		printf("%8s %8d %8d %8d\n", student[i].name, student[i].kokugo, student[i].sansu, student[i].eigo);
		return;
		



	}
}