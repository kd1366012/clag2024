#include<stdio.h>
int main(void) {
	int num,i,j,k,l;
	i = 5;
	j = 4;
	k = 3;
	l = 2;
	printf("0����100�܂ł̐��l�����:");
	scanf("%d",&num);
	if (num >=90) {
		printf("���̐��l�̔��茋�ʂ�[%d]�ł�",i);
	}
	else if (num >= 80 && num<=90) {
		printf("���̐��l�̔��茋�ʂ�[%d]�ł�",j);
	}
	else if (num >= 50 && num<=80) {
		printf("���̐��l�̔��茋�ʂ�[%d]�ł�", k);
	}
	else if (num >= 30 && num<=50) {
		printf("���̐��l�̔��茋�ʂ�[%d]�ł�",l);
	}
	else {
		printf("1�ł�");
	}
	return 0;
}