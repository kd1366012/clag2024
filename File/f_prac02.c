#include<stdio.h>
int main(void) {
	FILE* fp;
	int score = 0,max_score;
	char name[20];
	char max_name[20];
	char ch;
	fp = fopen("score.txt","r");
	fscanf(fp,"%s%d",max_name,&max_score);
	fclose(fp);
	printf("�ō����_ ���O:%s �X�R�A :%d\n",max_name,max_score);

	printf("�v���C���[�������");
	scanf("%s",name);
	while (1)
	{
		printf("���݂̃X�R�A:%d('e'�ŏI��)\n",score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	if (score > max_score) {
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
		printf("�n�C�X�R�A�X�V!!!\n");
	}
	else {
		printf("�X�V�Ȃ炸...");
	}
	return 0;


}