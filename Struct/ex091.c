#include<stdio.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
int main(void) {
	struct profile n;
	struct profile* p = &n;

	printf("���O�����:");
	scanf("%s",p->name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d %d %d",&p->birth[0],&p->birth[1],&p->birth[2]);
	printf("���t�^�����:");
	scanf("%c%c",&p->blood[0],&p->blood[1]);
	printf("%s -- %d�N%d��%d���� ���t�^- %c%c�^",p->name,p->birth[0],p->birth[1],p->birth[2],p->blood[0],p->blood[1]);

	return 0;

}