#include<stdio.h>
int main(void) {
	FILE* fp;
	int score = 0;
	char name[20];
	char ch;
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
	fp = fopen("score.txt","w");
	fprintf(fp,"%s\n%d\n",name,score);
	fclose(fp);
	return 0;


}