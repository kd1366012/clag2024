#include<stdio.h>
#define sol_num 3 //�����̐�	
typedef struct  {
	char wname[20];
	int bullet;
	float atk;

}weapon;

typedef struct {
	char name[20];
	int hp;
	weapon wpn;
}soldier;

void setinfo(soldier* s, char* filename);
void display(soldier* s);

int main(void) {
	soldier sols[sol_num];
	setinfo(sols, "file04.txt");
	display(sols);
	return 0;
}

void setinfo(soldier* s, char* filename){
	FILE* fp;
	int i;
	if (fp=fopen(filename,"r")) {
		for (i = 0; i < sol_num;i++) {
			fscanf(fp, "%s%d%s%d%f", (s+i)->name, &(s+i)->hp, (s+i)->wpn.wname, &(s+i)->wpn.bullet, &(s+i)->wpn.atk);
		}
		fclose(fp);
	}
	else {
		printf("�t�@�C�����ǂݍ��߂܂���");
	}
}

void display(soldier* s) {
	int i;
	for (i = 0; i < sol_num;i++) {
		printf("���O:%s �̗�;%d\n", (s+i)->name, (s+i)->hp);
		printf("����;%s �c�e��:%d�@�U����:%.2f\n", (s+i)->wpn.wname, (s+i)->wpn.bullet, (s+i)->wpn.atk);
	}
}