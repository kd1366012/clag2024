#include<stdio.h>
int main(void) {
	int num,i,j,k,l;
	i = 5;
	j = 4;
	k = 3;
	l = 2;
	printf("0から100までの数値を入力:");
	scanf("%d",&num);
	if (num >=90) {
		printf("その数値の判定結果は[%d]です",i);
	}
	else if (num >= 80 && num<=90) {
		printf("その数値の判定結果は[%d]です",j);
	}
	else if (num >= 50 && num<=80) {
		printf("その数値の判定結果は[%d]です", k);
	}
	else if (num >= 30 && num<=50) {
		printf("その数値の判定結果は[%d]です",l);
	}
	else {
		printf("1です");
	}
	return 0;
}