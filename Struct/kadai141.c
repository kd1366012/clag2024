#include<stdio.h>
struct course {
	char name[50];
	char text[50];
	int unit;
};
int main(void) {
	struct course data = { "�Q�[���\�t�g1�R�[�X","c����",8 };
	printf("�R�[�X��:%s\n",data.name);
	printf("\n���Ȗ�:%s\n",data.text);
	printf("\n�P�ʐ�: %d\n",data.unit);
	return 0;
}