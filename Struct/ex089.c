#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};


int main(void) {
	struct profile pro;
	printf("���O�����:");
	scanf("%s",pro.name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d %d %d", &pro.birth[0], &pro.birth[1],&pro.birth[2]);
	printf("���t�^�����:");
	scanf("%s",pro.blood);
	printf("%s -- %d�N%d��%d���� ���t�^ - %s�^",pro.name,pro.birth[0],pro.birth[1],pro.birth[2],pro.blood);

	return 0;


}